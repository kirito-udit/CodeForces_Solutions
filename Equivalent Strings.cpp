// DIFFICULTY LEVEL -: EASY. PLEASE TRY ON YOUR OWN BEFORE REFERRING TO THIS CODE
#include<bits/stdc++.h>
using namespace std;
string solve(string s) {
    if (s.length() % 2 == 1) return s;
    string s1 = solve(s.substr(0, s.length()/2));
    string s2 = solve(s.substr(s.length()/2, s.length()));
    if (s1 < s2) return s1 + s2;
    else return s2 + s1;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
string a,b;
cin>>a>>b;
if(solve(a) == solve(b))
std::cout << "YES" << std::endl;
else
std::cout << "NO" << std::endl;
return 0;
}
/* APPROACH -: FIND THE LEXICOGRAPHICALLY MINIMAL STRINGS FOR THE SUBSTRINGS OF A AND B INDIVIDUALLY.
IF BOTH OF THE MINIMAL STRINGS ARE EQUAL, THEN WE CAN SAY THAT AN EQUIVALENCE RELATION EXISTS.
*/
