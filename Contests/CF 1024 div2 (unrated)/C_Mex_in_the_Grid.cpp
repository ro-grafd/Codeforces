/*==================================================
  Author    : ASSaASSin
  Created   : 12-May-2025
  Purpose   : Competitive Programming Template
==================================================*/

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
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define yes cout << "YES" << nline
#define no cout << "NO" << nline
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    int counter = n * n - 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    while(left <= right && top <= bottom)
    {
        for(int j = left; j <= right; j++)
        {
            grid[top][j] = counter;
            counter--;
        }
        top++;
        for(int i = top; i <= bottom; i++)
        {
            grid[i][right] = counter;
            counter--;
        }
        right--;
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
                grid[bottom][j] = counter;
                counter--;
            }
            bottom--;
        }
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                grid[i][left] = counter;
                counter--;
            }
            left++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << nline;
    }
    // cout << nline;
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