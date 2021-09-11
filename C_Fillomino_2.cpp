#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
     int n;
    cin >> n;
    int board[n][n];
    int rem[n+1];
    for(int i=0;i<n;i++)
    cin>>board[i][i];
    int vis[n][n];
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++)vis[i][i]=1;
    unordered_map<int,pair<int,int>>M;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        M[i] = {i,i};
        st.insert(i);
        rem[i+1]=i;
    }
    while(!st.empty())
    {
        vector<int>temp;
        for(auto it:st)
        {  int tot=0;
            int x = M[it].first;
            int y = M[it].second;
            if(rem[board[it][it]]==0)
            {
                temp.push_back(it); continue;
            }
            if(x-1>=0 and (x-1)>=y and !vis[x-1][y]) tot++;
            if(x+1<n and (x+1)>=y and !vis[x+1][y]) tot++;
            if(y-1>=0 and (y-1)<=x and !vis[x][y-1])tot++;
            if(y+1<n and (y+1)<=x and !vis[x][y+1])tot++;
            if(tot==1)
            {
            if(x-1>=0 and (x-1)>=y and !vis[x-1][y]) M[it]={x-1,y};
            if(x+1<n and (x+1)>=y and !vis[x+1][y]) M[it]={x+1,y};
            if(y-1>=0 and (y-1)<=x and !vis[x][y-1])M[it]={x,y-1};
            if(y+1<n and (y+1)<=x and !vis[x][y+1])M[it]={x,y+1};
            vis[M[it].first][M[it].second]=1;
            board[M[it].first][M[it].second]=board[it][it];
            rem[board[it][it]]--;
            }
        }
        for(auto it:temp)st.erase(it);
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++)
    cout<<board[i][j]<<" ";
    cout<<endl;}
    return 0;
    
}