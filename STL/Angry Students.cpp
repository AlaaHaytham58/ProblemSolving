#include <bits/stdc++.h>
using namespace std;
#include <iostream>
void solve()
{
int no_groups;
cin >>no_groups;
stack<int> index_angry;
int no_students_per_group;
for (int i=0;i<no_groups;i++){
cin >>no_students_per_group;
char status[no_students_per_group];
for (int i=0;i<no_students_per_group;i++)
{
cin >>status[i];
if (status[i]=='A')
{
    index_angry.push(i);
}
}
if(index_angry.top()==no_students_per_group-1)
{
    cout<< 0<<endl;
}else {
    int last_angry=index_angry.top();
    int last_momemt=no_students_per_group-1-last_angry ;
    cout<<last_momemt<<endl;
}
}
}
 int main(){
    solve();
    return 0;
 }