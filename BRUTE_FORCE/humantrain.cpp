#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int totaltrains=0;
void human_train(vector<string>& names,vector<bool> & isused,int n,int last_one,int index)
{
    if(index ==n)
    {
        totaltrains ++;
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if (isused[i]) 
            {
                continue;
            }
            
            if(last_one!=-1 &&names[0][i]==names[last_one].back()) {
                continue;
            }
                
            isused[i]=true;
            human_train(names,isused,n, i, index+1);
            isused[i]=false;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<string>names(n);
    vector<bool> isused(n);
    for(int i=0;i<names.size();i++)
    {
        cin>>names[i];
    }
    human_train(names, isused,  n,-1, 0);
    cout<<totaltrains;
    return 0;
}
