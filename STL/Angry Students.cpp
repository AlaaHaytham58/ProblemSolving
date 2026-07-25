#include <bits/stdc++.h>
using namespace std;

void solve() {
    int no_groups;
    cin >> no_groups;
    for (int g = 0; g < no_groups; g++) { 
        int no_students_per_group;
        cin >> no_students_per_group;
        stack<int> index_angry; 
        string status; 
        cin >> status;
        for (int i = 0; i < no_students_per_group; i++) {
            if (status[i] == 'A') {
                index_angry.push(i);
            }
        }
        if (index_angry.empty()) {
            cout << 0 << endl;
            continue;
        }
        
        int max_moment = 0;
         int last_angry = index_angry.top();
        max_moment = max(max_moment, (no_students_per_group - 1) - last_angry);
        index_angry.pop();
        while (!index_angry.empty()) {
            int current_angry = index_angry.top();
            max_moment = max(max_moment, last_angry - current_angry - 1);
            last_angry = current_angry;
            index_angry.pop();
        }
        
        cout << max_moment << endl;
    }
}

int main() {
    solve();
    return 0;
}
