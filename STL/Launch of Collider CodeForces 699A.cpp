#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<char> direction(n);
    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> direction[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int min_time = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {

        if (direction[i] == 'R' && direction[i + 1] == 'L')
        {
            int collision = (input[i + 1] - input[i]) / 2;
            min_time = min(min_time, collision);
        }
    }
    if (min_time == INT_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << min_time << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
