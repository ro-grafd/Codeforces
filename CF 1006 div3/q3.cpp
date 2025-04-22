#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    ll n, x;
    cin >> n >> x;
    {
        ll o = 0;
        for(ll i = 0; i < n; i++)
        {
            o |= i;
        }
        if(o == x)
        {
            for(ll i = 0; i < n; i++)
            {
                cout << i << ' ';
            }
            cout << nline;
            return;
        }
    }

    {
        vector<ll> ans;
        ll o = 0;
        for(ll i = 0; i < n - 1; i++)
        {
            if((i | x) == x)
            {
                ans.push_back(i);
            }else{
                break;
            }
        }
        while(ans.size() != n)
        {
            ans.push_back(x);
        }
        for(int n : ans)
        {
            cout << n << ' ';
        }
        cout << nline;
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