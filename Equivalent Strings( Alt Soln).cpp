// A Divide and Conquer approach for the same problem
// Limitation -: Does not work for Large String Lengths
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ix(int n)
{
   if(n==0)
   return 0;
   if(n==1)
   return 0;
   return (n-1)/2;
}
int solve(string a, string b)
{
    if(a.length()>0&&b.length()>0&&(a==b)) // Match Found YAyyy
    {
        //std::cout << "YES" << std::endl;
        return 1;
    }
    else if((a.length()<1|| b.length()<1))  // Base case
    return 0;
    else{
    int na = a.length();
    int nb = b.length();
    return    
    solve(a.substr(0,(na/2)-1),b.substr(nb/2,nb-1)) // Divide
    +                                               // Conquer
    solve(a.substr(na/2,na-1),b.substr(0,(nb/2)-1)); // Combine
    }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
string a,b;
cin>>a>>b;
if(solve(a,b)!=0)
std::cout << "YES" << std::endl;
else
std::cout << "NO" << std::endl;
return 0;
}
