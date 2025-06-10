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
    ll a, b;
    cin >> a >> b;
    long long ans = INT_MAX;
    for(int added = 0 ; added < 32; added++)
    {
        long long operations = added;
        long long new_b = b + added;
        if(new_b == 1)
            continue;
        long long copy_a = a;
        while(copy_a > 0)
        {
            copy_a = copy_a / new_b;
            operations++;
        }
        cout << "times added: " << added << " new_b: " << new_b << " Total ops: " << operations << nline;
        ans = min(ans, operations);
    }
    cout << ans << nline;
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