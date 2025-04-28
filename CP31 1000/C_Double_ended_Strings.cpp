#include <bits/stdc++.h>
using namespace std;
#define Assassin
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
    string a, b;
    cin >> a >> b;
    int a1 = a.size(), b1 = b.size(), ans = 0;
    for(int len = 1 ; len <= min(a1, b1); len++)
    {
        for(int i = 0; i + len - 1 < a1; i++)
        {
            for(int j = 0; j + len - 1 < b1; j++)
            {
                if(a.substr(i, len) == b.substr(j, len))
                {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << a1 + b1 - 2*ans << nline;
}
int main ()
{
    fastio();
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}