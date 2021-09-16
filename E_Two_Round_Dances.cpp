#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    int n;
    cin >> n;
    int factn = 1;
    for(int i=1;i<=n;i++)
    factn*=i;
    int fact = 1;
    for(int i=1;i<=n/2;i++)
    fact*=i;
    cout<<factn/(n*(n/2))<<endl;
    return 0;
}