#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
 
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<n/2+1<<endl;
 
        for(ll i=0;i<n;i+=2)
        {
            if(i==n-1)
            {
             cout<<i-1+1<<" "<<i+1<<" "<<min(a[i],a[i-1])<<" "<<"1000000007"<<endl;
 
            }
            else
            {
                cout<<i+1<<" "<<i+1+1<<" "<<"1000000007 "<<min(a[i],a[i+1])<<endl;
                a[i+1]=min(a[i],a[i+1]);
                a[i]=1000000007;
            }
        }
 
    }
 
}