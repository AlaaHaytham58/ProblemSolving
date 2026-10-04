#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>
void solve( string OrginalString)
{
    int no_substring= OrginalString.size();
    for (int i=0;i<OrginalString.size();i++)
    {
     char first=OrginalString[i];
     for(int j=i+1;j<OrginalString.size();j++)
     {
        if(OrginalString[i]==OrginalString[j]){
             no_substring++;
        }
        
     }
    }
    cout<<no_substring;
}

int main() {
    string data;
    cin >>data;
    solve(data);
    return 0;
}
