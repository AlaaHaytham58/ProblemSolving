#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int no_of_ones = 0;
    vector<int> steps;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            no_of_ones++;
        }
        if (i == n - 1 || arr[i + 1] == 1) {
            steps.push_back(arr[i]);
        }
    }
    cout << no_of_ones << endl;
    for (int i = 0; i < steps.size(); i++) {
        cout << steps[i] << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}