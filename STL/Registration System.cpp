#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
        map<string, int> db;
    
    for (int i = 0; i < n; i++) {
        string username;
        cin >> username; 
        if (db[username] == 0) {
            cout << "OK" << "\n";
            db[username] = 1; 
        } 
        else {
            cout << username << db[username] << "\n";
            db[username]++;
        }
    }
}

int main() {
    solve();
    return 0;
}
