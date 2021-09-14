#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s1;
    cin >> s1;
    int count = 0;
    for(int i=1;i<s1.size();i++)
    {
        if(s1[i-1]==s1[i] or (i>1 and s1[i-2]==s1[i]))
        {
            s1[i]=32;
            count++;
        }
    }
    cout<<count<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}