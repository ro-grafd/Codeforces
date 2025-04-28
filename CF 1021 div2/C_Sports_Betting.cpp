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
    ll n;
    cin >> n;
    ll a[n];
    rep(i, 0,n) cin >> a[i];
    sort(a,a+n);
    vector<ll> v;
    rep(i, 0, n) {
        if(i == 0 || a[i] - a[i-1] <= 1){
            v.push_back(a[i]);
        }
        else{
            vector<ll> u(1,0);
            rep(j, 0, v.size()) {
                if(j == 0 || v[j] == v[j-1]) {
                    u.back()++;
                }
                else{
                    u.push_back(1);
                }
            }
            if(*max_element(u.begin(), u.end()) >= 4){
                cout << "Yes" << nline ;
                return;
            }
            ll cnt = 0;
            rep(i, 0, u.size()) {
                if(u[i] > 1) {
                    cnt++;
                }
            }
            if(cnt >= 2) {
                cout << "Yes" << nline ;
                return;
            }
            v.assign(1,a[i]);
        }
    }
 
    vector<ll> u(1,0);
    rep(j, 0, v.size()) {
        if(j == 0 || v[j] == v[j-1]) {
            u.back()++;
        }
        else{
            u.push_back(1);
        }
    }
    if(*max_element(u.begin(), u.end()) >= 4){
        cout << "Yes" << nline ;
        return;
    }
    ll cnt = 0;
    rep(i,0,u.size()) {
        if(u[i] > 1) cnt++;
    }
    if(cnt >= 2) {
        cout << "Yes" << nline ;
        return;
    }
 
    cout << "No" << nline ;
}
// bet on ai day
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