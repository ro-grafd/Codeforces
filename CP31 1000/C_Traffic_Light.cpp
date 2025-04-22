#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define INF 1000000000008
void solve()
{
    int n;
    char color;
    cin >> n >> color;
    string s;
    cin >> s;
    if(color == 'g'){
        cout << 0 << nline;
        return;
    }
    s += s;
    int last_occur = 0;
    int ans = INF;
    for(int i = 2*n - 1; i >= 0 ; i--)
    {
        if(s[i] == 'g'){
            last_occur = i;
        }
        if(s[i] == color)
        {
            ans = max(ans, last_occur - i);
        }
    }
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