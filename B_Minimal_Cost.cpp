// --------------------------------------------------<C++ TEMPLATE>------------------------------------------------
/**
    *  Kotecha Udit Hitendra
    *  @kirito-udit (codechef,codeforces,spoj,atcoder)
    *  MNNIT allahabad
    *  CSE'23
**/
            /*
     *---------------------------------------------
     * --------------------------------------------
     * --------------------------------------------
     * 
    العمل الجاد يتفوق على الموهبة الكسولة
 
     * 勤勉は怠惰な才能に勝る
     * 
     * 努力打敗懶惰的人才
     * 
      * कड़ी मेहनत आलसी प्रतिभा को हरा देती है
      * 
     * тяжелая работа превосходит ленивый талант
     * 
     * 勤勉は怠惰な才能に勝る
     * 
     * 努力打敗懶惰的人才
     * 
     * malfacila laboro superas maldiligentan talenton
     * 
     * el trabajo duro supera al talento perezoso
     * 
     * η σκληρή δουλειά κερδίζει τεμπέλης ταλέντο
     * 
     * il duro lavoro batte il talento pigro
     * 
     * munca grea bate talentul leneș
     * 
     * kazi ngumu hupiga talanta ya uvivu
     * 
     * piger ingenii labore verberat
     * 8
     * làm việc chăm chỉ đánh bại tài năng lười biếng
     * 
     * trabalho duro vence talento preguiçoso
     * 
     * працавітасць перамагае лянівы талент
     * 
     * le travail acharné bat le talent paresseux
     * 
     * I'M NOT SMART! I JUST STAY WITH THE PROBLEM LONGER !
     * 
     * --------------------------------------------------
     * --------------------------------------------------
     * --------------------------------------------------
*/
 

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//
// MACROS
//#define int                     unsigned long long
#define mp                      make_pair
#define pb                      push_back
#define MAX                     1e17
#define MIN                     -1e17
#define PI                      3.1415926535897932384626433832795
#define mod                     1000000007
#define eps                     1e-9
#define set(x)                  memset(x, 0, sizeof(x))
#define clr(x)                  memset(x, -1, sizeof(x))
#define ff                      first
#define ss                      second
#define rep(i,n)                for(int i=0;i<(n);i++)
#define FOR(i,a,b)              for(int i=(a);i<=(b);i++)
#define FORD(i,a,b)             for(int i=(a);i>=(b);i--)
#define sz(x)                   x.size()
#define endl                    "\n"
#define deb(x)                  cout << #x << "=" << x << endl
#define deb2(x, y)              cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x)                  x.begin(), x.end()
#define lb(a,x)                 lower_bound(all(a),x)
#define ub(a,x)                 upper_bound(all(a),x)

typedef priority_queue<int>     maxHeap;
typedef priority_queue<int,     vector<int>, greater<int>> minHeap;
typedef pair<int, int>          pii;
typedef vector<int>             vi;
typedef vector<string>          vs;
typedef vector<pii>             vpii;
typedef vector<vi>              vvi;
typedef map<int, int>            mpii;
typedef set<int>                seti;
// typedef multiset<int>           mseti;
// // typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// // template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
// // template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
//  typedef long int                ld;
//  typedef unsigned long int       lu;
//  typedef long long int           ll;
//  typedef unsigned long long int  llu;


// cout << fixed << setprecision(9) <<
int mpow(int base, int exp);

const int T2 = 105; const int T3 = 1005; const int T4 = 10005; const int T5 = 100005;
const int N = 2e5 + 5;

int n, m;
vector<int> vis(N, 0), deg(N, 0);
vector<int> adj[N], adj2[N];
int par[N], sizee[N];
int prime[N];
void sieve()
{
    for(int i=1;i<N;i++)
    prime[i]=i;
    
    for(int i=2;i<N;i+=2)
    prime[i]=2;
    
    for(int i=3;i<N;i+=2)
    {
        if(prime[i]==i)
        {
            for(int j=i*i;j<N;j+=i)
            prime[j]=i;
        }
    }
}
void counting_sort(int arr[], int n) //FOR SMALL POSITIVE NUMBERS
{
    int k=arr[0];
    for(int i=0;i<n;i++)
    k=max(k,arr[i]);
    int temp[k+1]={0};
    for(int i=0;i<n;i++)
    temp[arr[i]]++;
    int arr2[n];
    for(int i=1;i<n;i++)
    temp[i]+=temp[i-1];
    for(int i=n-1;i>=0;i--)
    {
        arr2[--temp[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++)
    arr[i] = arr2[i];
}




///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

void solve() {
int n, u , v2;
cin >> n >> u >> v2;
vector<int>v(n,0);
for(int&it:v) cin >> it;
int a=0, b = 0;
for(int i=1;i<n;i++)
{
    if(abs(v[i]-v[i-1])>=2)
    a=1;
    if(abs(v[i]-v[i-1])==1)
    b=1;
}
if(a)
{
    cout<<0; return;
}
if(b)
{
    cout<<min(u,v2); return;
}
cout<<min(v2+v2,u+v2);
}


/* TIPS
1. for interactive prob remove fastio and endl
2. for vector pass as reference ///
3.

*/



int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
     cin >> t;
    for (int i = 1; i <= t; i++) {

        solve();
        cout<<endl;
    }
    return 0;
}


