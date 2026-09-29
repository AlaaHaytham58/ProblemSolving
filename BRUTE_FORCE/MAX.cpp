#include <iostream>
using namespace std;
void solve(){
int N;
cin >>N;
int arr[N];
for (auto i=0;i<N;i++)
    cin >>arr[i];
int max=-999999;
for (auto i=0;i<N;i++)
{
arr[i]>max ?max=arr[i] :max=max;
}
cout<<max;
}

int main()
{
    solve();
}