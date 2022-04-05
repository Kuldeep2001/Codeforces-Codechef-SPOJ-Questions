// https://codeforces.com/problemset/problem/1657/C
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
    int n, ans = 0;
    string s;
    cin >> n >> s;
 
    int cnt = 0;
    int rm_size = 0;
    string tmp = "";
 
    for(int i = 0; i < n; ++i)
    {
        // To Check Right Bracket Sequence
        if(s[i] == '(' && i + 1 < n)
        {
            ++ans;
            rm_size = i + 2;
            ++i;
        }
        else
        {
            while(i < n)
            {
                ++i;
                if(s[i] == ')')
                {
                    ++ans;
                    rm_size = i + 1;
                    break;
                }
            }
        }
    }
    cout << ans << " " << n - rm_size << "\n";
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