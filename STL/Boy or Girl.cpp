#include <bits/stdc++.h>
using namespace std;
void solve(){
    string text;
    cin>>text;
    set<char> B_G(text.begin(), text.end());
    if (B_G.size() %2 !=0)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}
int main(){
    solve();
    return 0;

}