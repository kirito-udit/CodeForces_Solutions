#include<bits/stdc++.h>
using namespace std;
#define int long long
struct compare {
   bool operator()(const pair<int,int> &lhs, const pair<int,int>&rhs) const {
        if(lhs.first!=rhs.first)
        return lhs.first > rhs.first;
        else return lhs.second<rhs.second;
    }
};

std::multiset<pair<int,int>, compare>M;
queue<pair<int,int>>Q;
set<pair<int,int>>S;
int order;
void Query()
{
    int a,b;
    cin >> a;
    if(a==1)
    {
        cin >> b;
        Q.push({b,order});
        M.insert({b,order});
        order++;
    }
    else if(a==2)
    {
        while(Q.size() and S.count(Q.front()))Q.pop();
        if(Q.size())
        {
        cout<<Q.front().second<<" ";
        M.erase(Q.front());
        Q.pop();
        }
    }
    else
    {
        pair<int,int>temp;
       for(auto it:M)
       {
           cout<<it.second<<" ";
           temp = it; break;
       }
       M.erase(temp);
      S.insert(temp);
    }
}
int32_t main()
{
    int q;
    cin >> q;
    order=1;
    while(q--)
    Query();
    return 0;
}