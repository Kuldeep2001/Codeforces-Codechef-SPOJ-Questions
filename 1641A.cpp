// https://codeforces.com/problemset/problem/1641/A
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

void solve()
{
    int n,x;
    cin >> n >> x;
 
    map<int,int,greater<int> > mp;
    for(int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
 
    int ans = 0;
    while(!mp.empty())
    {
        auto a = mp.begin()->first;
 
        if(a%x == 0 && mp.find(a/x) != mp.end())
        {
            if(mp[a/x] > mp[a])
                mp[a/x] -= mp[a];
            else
            {
                ans += (mp[a] - mp[a/x]);
                mp.erase(a/x);
            }
        }
        else
            ans += mp[a];
 
        mp.erase(mp.begin());
    }
    cout << ans << "\n";
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