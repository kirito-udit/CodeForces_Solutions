#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b,p;
    cin >> a >> b >> p;
    string s;
    cin >> s;
    int count = 0;
    int i = 0;
    while(i<s.size())
    {
        if(s[i]=='A')
        {
        count+=a;
        while(i<s.size() and s[i]=='A')i++; i++;
        }
        else{
            count+=b;
            while(i<s.size() and s[i]=='B')i++; i++;
        }
    }
    i = 0;
    while(i<s.size() and count>p)
    {
       if(s[i]=='A')
        {
        count-=a;
        while(i<s.size() and s[i]=='A')i++;
        }
        else{
            count-=b;
            while(i<s.size() and s[i]=='B')i++;
        }
    }
  cout<<min((int)s.size(),i+1)<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}