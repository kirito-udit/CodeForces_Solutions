#include<bits/stdc++.h>
using namespace std;
#define int long long
int cost(string a,string b)
{
    if(a==b)return 0;
    int val=0;
    while(a!=b)
    {
        char ch=b[0];
        reverse(b.begin(),b.end());
        b.pop_back();
        if(b.size())
        reverse(b.begin(),b.end());
        b.push_back(ch);
        val++;
        if(val>500)
        {
            val=-1;
            break;
        }
    }
    return val;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<string>v(n);
    for(auto&it:v)cin >> it;
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int a = 0;
        for(int j=0;j<n;j++)
        {
            a+=cost(v[i],v[j]);
        }
        if(a==-1)a=INT_MAX;
        res=min(res,a);
    }
    if(res==INT_MAX or res<0)
    cout<<-1<<endl;
    else cout<<res<<endl;
    return 0;
}