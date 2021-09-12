#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,k;
    cin >> n>> k;
    if(n%4==0)
    {
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
    else
    {
        cout<<(n-1)/2<<" "<<(n-1)/2<<" "<<(n - (n-1)/2 - (n-1)/2)<<endl;
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}