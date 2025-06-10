#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> a(n);
    a[n -1] = k * b;
    s -= a[n -1] ;
    if(s < 0)
    {
        cout << -1 << nline;
        return;
    }else
    {
        for(int i = 0; i < n; i++)
        {
            ll minVal = min(k - 1, s);
            a[i] += minVal;
            s -= minVal;
        }
        if(s > 0) cout << -1 << nline;
        else{
            for(int i =0 ;i < n; i++)
                cout << a[i] << ' ';
            cout << nline;
        }
    }
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