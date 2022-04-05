// https://codeforces.com/problemset/problem/1650/C
// by Kuldeep Soni
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define REP(i,a,b) for(int i = (a); i <= (b); ++i)
#define RREP(i,a,b) for(int i = (a); i >= (b); --i)
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
#define debug(x) cout << #x << "=" << x << endl
#define debug_sp(x) cout << #x << "=" << x << " "
#define all(x) x.begin(),x.end()
#define setbits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_popcntzll(x)

using namespace std;

typedef vector<pii> vpii;
typedef vector<pll> vpll;

struct point{
    int weight,coordinate,index;
    point(int a,int b, int c)
    {
        weight = a;
        coordinate = b;
        index = c;
    }
};

int solve()
{
    int n,m;
    cin >> n >> m;
    vector<struct point> vec;

    for(int i = 0; i < m; ++i)
    {
        int x, w;
        cin >> x >> w;
        vec.emplace_back(point(w, x, i + 1));
    }

    sort(vec.begin(), vec.end(), [](point& a,point& b) -> bool {return (a.weight < b.weight);});

    sort(vec.begin(), vec.begin() + 2*n, [](point& a,point& b) -> bool {return (a.coordinate < b.coordinate);} );

    int t_sum = 0;
    for(int i = 0; i < 2*n; i++)
    {
        t_sum = t_sum + vec[i].weight;
    }

    cout << t_sum << "\n";
    for(int i = 0; i < n; i++)
        cout << vec[i].index << " " << vec[2*n - i - 1].index << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}