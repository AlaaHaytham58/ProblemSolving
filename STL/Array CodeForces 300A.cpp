#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    deque<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    deque<int> negative;
    deque<int> positive;
    deque<int> zero;
    int product_negative=1;
    int product_positive=1;
    for (int i=0;i<n;i++)
    {
        if (s[i] <0) {
            negative.push_back(s[i]);
            product_negative *=s[i];
            }
        else if (s[i]==0) zero.push_back(s[i]);
        else{
            positive.push_back(s[i]);
            product_positive *=s[i];
        } 
    }
    if (product_negative>0){
        zero.push_back(s.front());
        s.pop_front();
    }
    if (positive.empty()) {
        positive.push_back(negative.back());
        negative.pop_back();
        positive.push_back(negative.back());
        negative.pop_back();
    }
    cout << negative.size();
    for (int i = 0; i < negative.size(); i++) {
        cout << " " << negative[i];
    }
    cout << endl;

    cout << positive.size();
    for (int i = 0; i < positive.size(); i++) {
        cout << " " << positive[i];
    }
    cout << endl;

    cout << zero.size();
    for (int i = 0; i < zero.size(); i++) {
        cout << " " << zero[i];
    }
    cout << endl;

}
int main(){
    solve();
    return 0;
}