// C:\Users\JATIN\AppData\Roaming\Sublime Text 3\Packages\User
#pragma GCC optimize("Ofast","unroll-loops","O3")
#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define mp make_pair
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------------------------------------------------------------------------------------------------------------*/

void solve() {
    int N, M;
    cin >> N >> M;
    int road[101], bessie[101];
    int i, j, road_len = 1, temp, score;
    for (i  = 0; i < N; ++i) {
        cin >> j >> temp;
        while (j--) {
            road[road_len++] = temp;
        }
    }
    road_len = 1;
    for (i  = 0; i < M; ++i) {
        cin >> j >> temp;
        while (j--) {
            bessie[road_len++] = temp;
        }
    }
    for (i = 1; i < 101; i++) {
        if (bessie[i] > road[i]) {
            score = bessie[i] - road[i];
        }
    }
    cout << score << nline;
}

signed main() {
    fastio();
    int t = 1;
    // cin >> t;

    while (t--) solve();
    return 0;
}
