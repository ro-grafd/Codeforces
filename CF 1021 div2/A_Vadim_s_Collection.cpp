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
    string s;
    cin >> s;
    multiset<char>m(s.begin(), s.end());
    // 99 88 77 66 55
    for(int counter = 9 ; counter >= 0; counter--)
    {
        cout << *m.lower_bound(counter + '0') ;     // lower_bound(x) prints first element greater than equal to x
        m.erase(m.lower_bound(counter + '0'));      // 98765 , when counter = 4, least greater than 4 is 5 so 56789
    }
    cout << nline;
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