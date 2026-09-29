#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int win_jackpot=0;
void solve(const int &T,vector<int>&coins,vector<int>&seq,int index)
{
    
    // for(int i=0;i<coins.size();i++)
    // {
    //     cin>>arr[i];
    // }
    int coins_sum=0;
    if(index==seq.size())
    {
        for(int i=0;i<coins.size();i++)
        {
            coins_sum +=coins[i];
        }
         if(coins_sum==T) win_jackpot=1;        
    }else 
    {
        solve(T,coins,seq,index+1);
        coins.push_back(seq[index]);
        solve(T,coins,seq,index+1);
        coins.pop_back();
    }

}

int main() {
    int T;
    cin >>T;
    int N;
    cin>>N;
    vector<int> arr(N);
    vector<int> coins;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    solve(T,coins,arr,0);
     win_jackpot==1 ?cout<<1:cout<<0;
    
    return 0;
}
