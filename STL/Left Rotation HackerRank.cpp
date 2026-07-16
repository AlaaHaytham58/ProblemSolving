#include <bits/stdc++.h>
using namespace std;
#include <iostream>
deque<int> leftRotation(int n,  int d) {
deque<int> input;
for (int i=0;i<n;i++)
{
    int val;
    cin >> val;
    input.push_back(val);
}
    if (n > 0) {
        d = d % n; 
    }
for (int i=0;i<d;i++)
{
    int first_pop = input.front(); 
    input.pop_front();                
    input.push_back(first_pop);   
}
return input;
}

int main() {
    int n,d;
    cin >> n >>d;
    deque<int>result_queue;
    result_queue =leftRotation(n,d);
    for (int i=0 ;i<n;i++)
    {
        cout << result_queue[i]<<" ";
    }
    return 0;
}
