#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define INF 1000000000000000000LL
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

void solve()
{
    int n;
    cin >> n;
    char s[n];
    int ones = 0, zeros = 0;
    rep(i, 0, n)
    {
        cin >> s[i];
        if(s[i] == '1') ones++;
        else if(s[i] == '0') zeros++;
    }
    int ans = (n - ones) + (n-1)*ones;
    cout << ans << nline;
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}