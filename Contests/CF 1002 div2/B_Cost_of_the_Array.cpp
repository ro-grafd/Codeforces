#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
void solve()
{
    int n,k;
    cin >> n;
    cin >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if(n == k)
    {
        ll b[k / 2];
        for(ll i = 1; i < n; i+= 2)
            b[i/2] = a[i];
        for(long long i = 0; i < k / 2; i++)
        {
            if(b[i] != i + 1)
            {
                cout << i + 1 << nline;
                return;
            }
        }
        cout << n / 2 + 1 << nline;
    }else
    {
        if(count(a.begin() + 1, a.begin() + n - k + 2, 1) == n - k + 1)
        {
            cout << 2 << nline;
        }else{
            cout << 1 << nline;
        }
    }
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


