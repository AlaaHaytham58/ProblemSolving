#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> negative;
    vector<int> positive;
    vector<int> zero;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] < 0) {
            negative.push_back(s[i]);
        } else if (s[i] > 0) {
            positive.push_back(s[i]);
        } else {
            zero.push_back(s[i]);
        }
    }

    vector<int> set1;
    set1.push_back(negative.back());
    negative.pop_back();

    vector<int> set2;
    if (!positive.empty()) {
       
        set2.push_back(positive.back());
        positive.pop_back();
        
    } else {
        set2.push_back(negative.back());
        negative.pop_back();
        set2.push_back(negative.back());
        negative.pop_back();
    }

    
    vector<int> set3;
    for (int x : zero) set3.push_back(x);
    for (int x : negative) set3.push_back(x);
    for (int x : positive) set3.push_back(x);

    cout << set1.size();
    for (int x : set1) cout << " " << x;
    cout << "\n";

    cout << set2.size();
    for (int x : set2) cout << " " << x;
    cout << "\n";

    cout << set3.size();
    for (int x : set3) cout << " " << x;
    cout << "\n";
}

int main(){
    solve();
    return 0;
}