#include <bits/stdc++.h>
using namespace std;

int n, K, minL;
vector<string> names;
vector<int> skill;
set<string> used;   // names already on the team

long long solve(int i, int picked, int sum) {
    if (picked == K)                 // team is full
        return sum >= minL ? 1 : 0;  // valid only if skill is enough
    if (i == n) return 0;            // out of students, team not full

    // branch 1: skip student i
    long long ways = solve(i + 1, picked, sum);

    // branch 2: take student i (only if the name isn't used yet)
    if (!used.count(names[i])) {
        used.insert(names[i]);                          // choose
        ways += solve(i + 1, picked + 1, sum + skill[i]);
        used.erase(names[i]);                           // undo (backtrack)
    }

    return ways;
}

int main() {
    cin >> n >> K >> minL;
    names.resize(n);
    skill.resize(n);
    for (auto& s : names) cin >> s;
    for (auto& x : skill) cin >> x;
    cout << solve(0, 0, 0) << endl;
}