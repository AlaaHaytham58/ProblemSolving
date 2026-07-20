#include <bits/stdc++.h>
using namespace std;
#include <iostream>
void solve(){
int no_commands;
cin >>no_commands;
deque<int>queue;
bool flipped =false;
while( no_commands!=0){
    string option;
    cin >>option;
    if (option == "push_back") {
            int n;
            cin >> n;
            if (flipped) {
                queue.push_front(n);
            } else {
                queue.push_back(n);
            }
        } 
        else if (option == "toFront") {
            int n;
            cin >> n;
            if (flipped) {
                queue.push_back(n);
            } else {
                queue.push_front(n);
            }
        } 
        else if (option == "front") {
            if (queue.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (flipped) {
                    cout << queue.back() << "\n";
                    queue.pop_back();
                } else {
                    cout << queue.front() << "\n";
                    queue.pop_front();
                }
            }
        } 
        else if (option == "back") {
            if (queue.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (flipped) {
                    cout << queue.front() << "\n";
                    queue.pop_front();
                } else {
                    cout << queue.back() << "\n";
                    queue.pop_back();
                }
            }
        } 
        else if (option == "reverse") {
            flipped = !flipped;
        }
    no_commands--;
}

}
int main(){
    solve();
    return 0;
}