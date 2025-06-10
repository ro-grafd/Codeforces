#include <bits/stdc++.h>
using namespace std;
// #define Assassin 
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const ll MOD = 1e9 + 7;
const ll INF = LONG_LONG_MAX;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif


void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    string res;
    int Rlen = r / (b + 1);
    debug(Rlen);
    int extraRs = r % (b + 1);
    for(int times = 1; times <= b+1; times++)
    {
        for(int i = 0; i < Rlen; i++)
        {
            res += 'R';
        }
        if(extraRs > 0)
        {
            res += 'R';
            extraRs--;
        }
        if(times != b + 1)
        {
            res += 'B';
        }
    }
    cout << res << nline;
}
int main ()
{
    fastio()
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}