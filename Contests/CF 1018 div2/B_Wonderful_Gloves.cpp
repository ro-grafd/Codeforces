#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> l(n), r(n);
    for(int i = 0; i < n; i++) cin >> l[i];
    for(int i = 0; i < n; i++) cin >> r[i];
    vector<ll> spare_gloves(n);
    ll toPull = 0;
    for(int i = 0; i < n; i++)
    {
        if(l[i] >= r[i])
        {
            toPull += l[i];
            spare_gloves[i] = r[i];
        }else
        {
            toPull += r[i];
            spare_gloves[i] = l[i];
        }
    }
    ll extra_needed = 0;
    sort(spare_gloves.begin(), spare_gloves.end(), greater<ll>());
    for(int i = 0; i < k -1; i++)
    {
        extra_needed += spare_gloves[i];
    }
    toPull = toPull + extra_needed + 1; // take only k - 1 top ones and just one of the kth one ( here where the minimize part)
    cout << toPull << nline;
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