#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    int dp[3];
    memset(dp,0,sizeof(dp));
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
       char p=s[i];
        if(p=='R')dp[0]++;
        else if(p=='B')dp[1]++;
        else dp[2]++;
    }
    if(dp[0]>=1 and dp[1]>=1 and dp[2]>=1)cout<<"BGR";
    else
    if((dp[0]>1 and dp[1]>1) or (dp[1]>1 and dp[2]>1) or (dp[2]>1 and dp[0]>1))
    {
        cout<<"BGR";
    }
    else if(dp[0]*dp[1]*dp[2]==0)
    {
        if(dp[0]==0 and dp[1]==0)cout<<"G";
        else if(dp[1]==0 and dp[2]==0)cout<<"R";
        else if(dp[0]==0 and dp[2]==0)cout<<"B";
        else if(dp[0]==0)
        {
            if((dp[1]>1 and dp[2]==1))
            cout<<"GR";
            else if(dp[1]==1 and dp[2]>1)
            cout<<"BR";
            else
            cout<<"R";
        }
        else if(dp[1]==0)
        {
              if((dp[0]>1 and dp[2]==1))
            cout<<"BG";
            else if(dp[0]==1 and dp[2]>1)
            cout<<"BR";
            else
            cout<<"B";
        }
        else if(dp[2]==0)
        {
            if((dp[1]>1 and dp[0]==1))
            cout<<"GR";
            else if(dp[1]==1 and dp[0]>1)
            cout<<"BG";
            else
            cout<<"G";
        }
    }
    return 0;
}