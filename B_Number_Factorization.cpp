#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int,int>>getPrime(int n)
{
    vector<pair<int,int>>ans;
    pair<int,int>p1 = {0,0};
    int x = n;
    while(n%2 == 0)
    {
        p1.first = 1;
        p1.second++;
        n/=2;
    }
    if(p1.first)ans.push_back({2,p1.second});
    int i=3;

    while(i*i<=n)
    {
        pair<int,int>p = {0,0};
        if(n%i==0)
        p.first = 1;
        while(n%i==0)
        {
            n/=i;
            p.second++;
        }
        if(p.first)
        ans.push_back({i,p.second});
        i+=2;
    }
    if(n>2)
    ans.push_back({n,1});
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        auto g = getPrime(n);
        int ans = 0;
        while(g.size())
        {
            int curr = 1e17;
            for(int j=0;j<g.size();j++)
            for(int i=0;i<g.size();i++)
            {
                if(g[i].second == 0)
                {
                    g.erase(g.begin()+i);
                    break;
                }
            }
            if(g.empty())break;
            for(int i=0;i<g.size();i++)
            {
                curr=min(curr,g[i].second);
            }
            int curr_ans = 1;
            for(int i=0;i<g.size();i++)
            {
                curr_ans*=g[i].first;
            }
            curr_ans*=curr;
            for(int i=0;i<g.size();i++)
            g[i].second-=curr;
            ans+=curr_ans;
        }
        cout<<ans<<endl;
    }
}