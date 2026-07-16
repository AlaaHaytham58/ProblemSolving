#include <bits/stdc++.h>
using namespace std;
#include <iostream>
void solve(int n)
{
int arr[n];
vector<int> set1;
vector<int> set2;
vector<int> set3;

for (int i=0;i<n;i++)
{
    cin >> arr[i];
}

for (int i=0;i<n;i++)
{
    if (arr[i]==1)
    {
        set1.push_back(i+1);
    }
    else if(arr[i]==2)
    {
        set2.push_back(i+1);
    }
    else{
    set3.push_back(i+1);

    }
}
    if (set1.empty() || set2.empty() || set3.empty()){
        cout << 0 << "\n";
        return; 
    }
int smallest = 0;

if (set1.size() <= set2.size() && set1.size() <= set3.size()) 
{
    smallest = set1.size();
} 
else if (set2.size() <= set1.size() && set2.size() <= set3.size()) 
{
    smallest = set2.size();
} 
else 
{
    smallest = set3.size();
}
    cout << smallest << "\n";

    for (int i = 0; i < smallest; i++)
    {
        cout << set1[i] << " " << set2[i] << " " << set3[i] << "\n";
    }
}
int main()
{
    int n;
    cin >>n;
    solve(n);
    return 0;
}