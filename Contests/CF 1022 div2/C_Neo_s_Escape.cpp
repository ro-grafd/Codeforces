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
    int n;
    cin >> n;
    vll a(n);
    rep(i, 0, n) cin >> a[i];
    int result = 0;
    int left = 0;
    // Find the total number of peaks in the array, that many number of Clones
    while(left < n)
    {
        int right = left;
        while(right + 1 < n && a[right + 1] == a[left])
        {
            right++;
        }
        ll peak = a[left];
        bool first_part = (left == 0) || (a[left-1] < peak);
        bool second_part = (right == n-1) || (a[right + 1] < peak);
        if(first_part && second_part)
            result++;
        left = right + 1;
    }
    cout << result << nline;
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