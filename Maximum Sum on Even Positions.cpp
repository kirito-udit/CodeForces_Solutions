// Extension of Kadane's Algorithm
// Divide and Conquer Methodology
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i) 
#define REP(i,k,n) for (int i = k; i < n; ++i) 
#define REPR(i,k,n) for (int i = k; i >= n; --i) 
#define input(i,n,arr,p) for(int i=0;i<n;i++){ int p;cin>>p;arr[i] = p;}
typedef long long ll;
ll kadane(vector<ll>nums)  // Finding the Subarray with Max Sum, using kadane
{
    ll n = nums.size();
         ll res = nums[0];
        ll sum = nums[0];
        for(ll i=1;i<nums.size();i++)
        {
            if(sum+nums[i]<nums[i])
                sum = nums[i];
            else
                sum+=nums[i];
            res = max(sum,res);
            
        }
        if (res<0)
        return 0;
        return res;
}
void solve()
{
   ll N;
   cin>>N;
   ll arr[N];
   ll temp;
   for(ll i=0;i<N;i++)
   {
       cin>>temp;
       arr[i] = temp;
   }
   
   ll sum = 0;
   for(ll i=0;i<N;i+=2)
   {
       sum+=arr[i];
   }
    if(N==2)
   sum = max(arr[0],arr[1]);
   else if(N>2)
   {
    std::vector<ll>arr2,arr3;
    for(ll i =0; i<N-1;i+=2)
    arr2.push_back(arr[i+1]-arr[i]); // Swap back functionality
    for(ll i=1;i<N-1;i+=2)
    arr3.push_back(arr[i]-arr[i+1]); // Swap front functionality
    sum+=max(kadane(arr2),kadane(arr3));
   }
   std::cout << sum << std::endl;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
  ll T;
cin>>T;
 while(T--)
solve();
return 0;
}
// Self written code
// Explanation https://youtu.be/usTJw7WFZIg
