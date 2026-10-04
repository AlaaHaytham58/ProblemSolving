#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(string key,string map_string)
{
    int no_matches=0;
    size_t pattern=map_string.find(key);
    while(pattern !=string::npos)
    {
        no_matches ++;
        pattern=map_string.find(key,pattern+1);
    }
    return no_matches;
}

int main() {

    string map_string;
    cin>>map_string;
    string key;
    cin>>key;
    int no_matches=solve( key,  map_string);
    cout<<no_matches;
    return 0;
}
