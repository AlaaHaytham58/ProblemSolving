#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int min_distance=INT_MAX;
void solve(int n,vector<pair<int,int>> coord)
{
   for(int i=0;i<n;i++)
   {
    int x1 = coord[i].first;
    int y1 = coord[i].second;
    for(int j=0;j<n;j++){
        if(coord[j].first==x1 &&coord[j].second==y1 && i==j)
        {
             continue;
        }
        else
        {
            int distance=round( sqrt(((coord[j].first-x1)*(coord[j].first-x1)) + ((coord[j].second-y1)*(coord[j].second-y1))));
            if(distance<=min_distance)
            {
                min_distance=distance;
            }
        }
    }
   } 
   cout<<min_distance;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> coord(n);
    for(int i=0;i<coord.size();i++)
    {
    cin >> coord[i].first >> coord[i].second;    }
    solve(n,coord);
    return 0;
}
