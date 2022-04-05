// https://codeforces.com/problemset/problem/1647/B
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

int n,m;

bool isvalid(int i,int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}
string solve()
{
    cin >> n >> m;

    string arr[n];
    REP(i,0,n - 1)
    {
        cin >> arr[i];
    }

    REP(i,0,n - 1)
    {
        REP(j,0,m - 1)
        {
            if(arr[i][j] == '1' && isvalid(i - 1, j - 1) && arr[i - 1][j - 1] == '0' && arr[i - 1][j] == '1' && arr[i][j - 1] == '1')
            {
                // cout << i << " " << j << " ";
                return "NO";
            }
            if(arr[i][j] == '1' && isvalid(i - 1, j + 1) && arr[i - 1][j + 1] == '0' && arr[i - 1][j] == '1' && arr[i][j + 1] == '1')
            {
                // cout << i << " " << j << " ";
                return "NO";
            }
            if(arr[i][j] == '1' && isvalid(i + 1, j - 1) && arr[i + 1][j - 1] == '0' && arr[i + 1][j] == '1' && arr[i][j - 1] == '1')
            {
                // cout << i << " " << j << " ";
                return "NO";
            }
            if(arr[i][j] == '1' && isvalid(i + 1, j + 1) && arr[i + 1][j + 1] == '0' && arr[i + 1][j] == '1' && arr[i][j + 1] == '1')
            {
                // cout << i << " " << j << " ";
                return "NO";
            }
        }
    }
    return "YES";
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
        cout << solve() << "\n";
    
    return 0;
}