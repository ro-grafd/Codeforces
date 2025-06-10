#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll b;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> b;
    a[0] = min(a[0],b - a[0]);
    for(int i = 1; i < n; i++)
    {
        if(min(a[i], b - a[i]) >= a[i-1])
        {
            a[i] = min(a[i], b - a[i]);
        }else{
            if(max(a[i] , b - a[i]) >= a[i-1])
            {
                a[i] = max(a[i], b - a[i]);
            }else{
                cout << "NO" << nline;
                return;
            }
        }
    }
    cout << "YES" << nline;
    return;
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