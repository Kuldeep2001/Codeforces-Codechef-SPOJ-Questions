// 
// by Kuldeep Soni
#include <bits/stdc++.h>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// Ordered Set Tree
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define ll long long
#define int long long
#define ld long double
#define REP(i,a,b) for(int i = (a); i <= (b); ++i)
#define RREP(i,a,b) for(int i = (a); i >= (b); --i)
#define fr(i, n) for (int i = 0; i < (n); ++i)
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
// void _print(int t) { cerr << t; }
void _print(bool t) { cerr << (t?"true":"false"); }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(deque <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(stack<T> g){ cerr << " ["; while(!g.empty()){ cerr << g.top() << " "; g.pop(); } cerr << "]"; }
template <class T> void _print(priority_queue<T> g){ cerr << " ["; while(!g.empty()){ cerr << g.top() << " "; g.pop(); } cerr << "]"; }

class Matrix: public vector<vll> {
    // vector<vll> m;
    private:
        Matrix() {}

    public:
        Matrix(int r, int c) {
            this->resize(r, vll(c,0));
            // m.resize(r, vll(c,0));
        }
        Matrix(vector<vll> inp) {
            this->assign(inp.begin(), inp.end());
        }
        Matrix operator *(Matrix a) {
            vector<vll> m1 = *this;
            vector<vll> m2 = a;
            int r1 = m1.size();
            int c1 = m1[0].size();
            int r2 = m2.size();
            int c2 = m2[0].size();
            if(c1 != r2) {
                cerr << "Matrix multiplication not possible" << endl;
                return Matrix(vector<vll>());
            }
            vector<vll> res(r1, vll(c2));
            fr(i,r1) {
                fr(j,c2) {
                    res[i][j] = 0;
                    fr(k, c1) {
                        res[i][j] += m1[i][k]*m2[k][j];
                    }
                }
            }
            return Matrix(res);
        }
        static Matrix identity(int r) {
            Matrix m = Matrix(r,r);
            fr(i,r) {
                m[i][i] = 1;
            }
            return m;
        }
        bool isSquareMatrix() {
            return (this->size() == this[0].size());
        }
        bool isZero() {
            for(auto row:(*this)) {
                for(auto el:row) {
                    if(el != 0) return false;
                }
            }
            return true;
        }
};

Matrix matrix_binpow(Matrix x,ll y) {
    if(!x.isSquareMatrix())
    {
        cout << "Matrix must be square matrix for using matrix multiplication" << endl;
        return Matrix(0,0);
    }
    Matrix ans = Matrix::identity(x.size());
    while(y) {
        if(y&1) {
            ans = ans * x;
        }
        x = x*x;
        y >>= 1;
    }
    return ans;
}

void solve()
{
    // cout << binmul(200, 1500) << endl;
    int r,c;
    cin >> r >> c;

    Matrix a(r,c);
    // vector<vll> a(r,vll(c,0));
    fr(i,r) {
        fr(j,c)
            cin >> a[i][j];
    }

    cin >> r >> c;
    Matrix b(r,c);
    fr(i,r) {
        fr(j,c)
            cin >> b[i][j];
    }

    Matrix prod = a*b;
    deb(prod);

    deb(matrix_binpow(prod, 4));

}

signed main() {
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