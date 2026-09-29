#include <bits/stdc++.h>
using namespace std;

string patternmatch(const string& s, int n, const vector<string>& myfinallist)
{
    if (s.size() == n)
    {
        for (const string& pattern : myfinallist)
        {
            if (s.find(pattern) == string::npos)
            {
                return "";
            }
        }
        return s;
    }
    string b1=patternmatch(s+"0",n,myfinallist);
    string b2=patternmatch(s+"1",n,myfinallist);
    return b1==""?b2:b1;

}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<string> myfinallist(m);
    for (int i = 0; i < m; i++)
    {
        cin >> myfinallist[i];
    }
    cout << (patternmatch("", n, myfinallist) ) << '\n';
}