// https://codeforces.com/problemset/problem/1660/B
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
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    if(n < 2)
    {
        if(arr[0] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
        return;
    }
    
    int mx,s_mx;
    if(arr[0] < arr[1])
    {
        mx = arr[1];
        s_mx = arr[0];
    }
    else
    {
        mx = arr[0];
        s_mx = arr[1];
    }

    for(int i = 2; i < n; ++i)
    {
        if(arr[i] > mx)
        {
            s_mx = mx;
            mx = arr[i];
        }
        else if(arr[i] > s_mx)
        {
            s_mx = arr[i];
        }
    }
    if(mx - s_mx > 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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