#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m,x;
    cin >> n >> m >> x;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int p; cin>>p;
        v[i] = {p,i};
    }
    vector<int>tower(m);
    sort(v.begin(),v.end());
    vector<int>visited(n,0);
    for(int i=0;i<m;i++)
    {
        tower[i] = v[i].first;
        visited[v[i].second] = i+1;
    }
    for(int i=n-1;i>=m;i--)
    {
        tower[(n-i+m-1)%m]+=v[i].first;
        visited[v[i].second] = (n-i+m-1)%m + 1;
    }
    if(*max_element(tower.begin(),tower.end())-*min_element(tower.begin(),tower.end())>x)
    {
        cout<<"NO"<<endl;return;
    } 
    cout<<"YES"<<endl;
    for(auto it:visited)cout<<it<<" ";
    cout<< endl;   
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}
