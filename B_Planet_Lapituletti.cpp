#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b;
    cin>> a>> b;
    string s;
    cin >> s;
    int x = (int)stoi(s.substr(0,2));
    int y = (int)stoi(s.substr(3,2));
    while(x> b or y>a)
    {
        y++;
        y%=a;
        if(y==0)
        x++;
        x%=b;
    }
    cout<<x<<":"<<y<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t-- )solve();
    return 0;
}