#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define INF 1000000000000000000LL
ll funct(vector<vector<ll>>& height, vector<ll>& a)
{
    int n = height.size();
    vector<bool> v1(n), v2(n), v3(n);
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(height[i][j] == height[i-1][j] + 1)
            {
                v1[i] = true;           // TF NOT ALLOWED
            }
            if(height[i][j] == height[i-1][j] - 1)
            {
                v3[i] = true;           // FT NOT ALLOWED
            }
            if(height[i][j] == height[i-1][j])
            {
                v2[i] = true;           // FF TT NOT ALLOWED
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(v1[i] && v2[i] && v3[i])
        {
            return INF;
        }
    }
    vector<ll> dp1(n), dp2(n);
    dp1[0] = 0, dp2[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        if(v1[i] && v2[i])
        {
            dp1[i] = INF;
            dp2[i] = dp1[i-1] + a[i];   // FT
        }else if(v2[i] && v3[i])
        {
            dp1[i] = dp2[i-1];          // TF
            dp2[i] = INF;
        }else if(v1[i] && v3[i])
        {
            dp1[i] = dp1[i-1];          // FF
            dp2[i] = dp2[i-1] + a[i];   // TT
        }else if(v1[i])
        {
            dp1[i] = dp1[i-1];          // FF
            dp2[i] = min(dp1[i-1], dp2[i-1]) + a[i];   // FT TT 
        }else if(v2[i])
        {
            dp1[i] = dp2[i-1];          // TF
            dp2[i] = dp1[i-1] + a[i];   // FT
        }else if(v3[i])
        {
            dp1[i] = min(dp1[i-1], dp2[i-1]);   // TF FF
            dp2[i] = dp2[i-1] + a[i];           // TT
        }else
        {
            dp1[i] = min(dp1[i-1], dp2[i-1]);
            dp2[i] = min(dp1[i-1], dp2[i-1]) + a[i];
        }
    }
    return min(dp1[n-1], dp2[n-1]);
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<vector<ll>> height(n, vector<ll>(n, 0));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> height[i][j];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll ans = funct(height, a);
    if(ans == INF)
    {
        cout << -1 << nline;
        return;
    }
    vector<vector<ll>> transpose(n, vector<ll>(n, 0));
    transpose = height;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            transpose[i][j] = height[j][i];
    ans += funct(transpose, b);
    if(ans >= INF)
    {
        cout << -1 << nline;
        return;
    }
    cout << ans << nline;
    return;
}
int main ()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}