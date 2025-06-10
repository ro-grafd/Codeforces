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
    string s;
    cin >> s;
    vi a,b;
    for(int i = 0; i< n; i++)
    {
        if(s[i] == 'A') a.pb(i + 1);
        else b.pb(i + 1);
    }
    bool canSheWin = false;
    for(int num : a)
    {
        bool canHeBeat = false;
        if(num == 1)
        {
            for(int num2 : b)
            {
                if(num2 >= 2 && num2 <= n -1)
                {
                    canHeBeat = true;
                    break;
                }
            }
        }else if(num == n)
        {
            for(int num2 : b)
            {
                if(num2 == 1)
                {
                    canHeBeat = true;
                    break;
                }
            }
        }else
        {
            for(int num2 : b)
            {
                if(num2 > num)
                {
                    canHeBeat = true;
                    break;
                }
            }
        }

        if(!canHeBeat)  // means alice has some card which he cant beat
        {
            canSheWin = true;
            break;
        }
    }
    if(canSheWin)
    {
        cout << "Alice" << nline;
    }else
    {
        cout << "Bob" << nline;
    }
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