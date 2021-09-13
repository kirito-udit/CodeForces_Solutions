#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
   k--;
   int p = n/2;
   cout<<((k+ (n%2)*k/p)%n +1)<<endl;

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}