#include <bits/stdc++.h>
using namespace std;

int n;
int a[10];

long long solve(int i, bool used) {
    if (i == n) return used ? 1 : -1;   // -1 = invalid (never used the +1)

    long long best = -1;

    // Branch 1: don't add 1 to a[i]
    long long r = solve(i + 1, used);
    if (r != -1) best = max(best, a[i] * r);

    // Branch 2: add 1 to a[i] (only if not used yet)
    if (!used) {
        r = solve(i + 1, true);
        if (r != -1) best = max(best, (a[i] + 1) * r);
    }

    return best;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(0, false) << endl;
    return 0;
}