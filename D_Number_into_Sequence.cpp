#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
void fill(vector<int>&factor,int n)
{
    while(n%2==0)
    {
        factor.push_back(2);
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            factor.push_back(i);
            n/=i;
        }
    }
    if(n>2)
    factor.push_back(n);
}
void solve()
{
    int n;
    cin >> n;
    vector<int>factor;
    fill(factor,n);
    map<int,int>M;
    for(auto it:factor)
    {
        M[it]++;
    }
    int i=0;
    int idx=0;
    for(auto it:M)
    {
        i = max(it.second,i);
    }
    vector<int>ans(i,1);
    int j = 0;
    for(auto it:M)
    {
        for(int k = i-it.second;k<ans.size();k++)
        {
            ans[k]*=it.first;
        }
    }
    cout<<i<<endl;
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}