// https://codeforces.com/problemset/problem/1644/A
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
    string s;
    cin >> s;
    int arr[3] = {0};
    for(int i = 0; i < 6; ++i)
    {
        switch(s[i])
        {
            case 'r':
                arr[0] -= i;
                break;
            case 'R':
                arr[0] += i;
                break;
            case 'g':
                arr[1] -= i;
                break;
            case 'G':
                arr[1] += i;
                break;
            case 'b':
                arr[2] -= i;
                break;
            case 'B':
                arr[2] += i;
                break;
            default:
                cout << "no matching character\n";
        }
    }
    if(arr[0] > 0 && arr[1] > 0 && arr[2] > 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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