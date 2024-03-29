// https://codeforces.com/problemset/problem/1739/B
// by Kuldeep Soni
#include <bits/stdc++.h>
#include <chrono>
using namespace std;

#define ll long long
#define ld long double
#define REP(i,a,b) for(int i = (a); i <= (b); ++i)
#define RREP(i,a,b) for(int i = (a); i >= (b); --i)
#define fr(i, n) for (int i = 0; i < (n); i++)
#define clr(x) memset(x, 0, sizeof(x))
#define vi vector <int>
#define vll vector <ll>
#define vs vector <string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb emplace_back
#define F first
#define S second
#define mod 1000000007
#define PI 3.1415926535897932384626
#define endl "\n"
// #define debug(x) cout << #x << "=" << x << endl
// #define debug_sp(x) cout << #x << "=" << x << " "
#define all(x) x.begin(),x.end()
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());} // for Vector v
#define setbits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_popcntzll(x)

typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
    #define deb(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
    #define deb(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(deque <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(priority_queue<T> g){ cerr << " ["; while(!g.empty()){ cerr << g.top() << " "; g.pop(); } cerr << "]"; }

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    int curr_sum = arr[0];
    // cout << curr_sum << " ";
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] != 0 && curr_sum-arr[i]>=0)
        {
            cout << "-1\n";
            return;
        }
        curr_sum += arr[i];
    }

    curr_sum = 0;
    for(int i = 0; i < n; ++i)
    {
        curr_sum += arr[i];
        cout << curr_sum << " ";
    }
    cout << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // auto start1 = std::chrono::high_resolution_clock::now();

    int t = 1;
    cin >> t;
    while(t--)
        solve();

    // auto stop1 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop1 - start1);

    /* #ifndef ONLINE_JUDGE
        cerr << "Time: " << duration.count() / 1000.0 << endl;
    #endif */
    return 0;
}