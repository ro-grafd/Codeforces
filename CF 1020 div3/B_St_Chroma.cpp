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
    int n, x;
    cin >> n >> x;
    vector<ll> perm(n, 0);
    if(x == 0)
    {
        for(int i = 0; i < n - 1; i++ )
        {
            perm[i] = i + 1;
        }
    }else if (x == n)
    {
        for(int i = 0; i < n; i++)
        {
            perm[i] = i;
        }
    }else
    {
        for(int i = 0; i < x; i++)
        {
            perm[i] = i;
        }
        int counter = n -1;
        for(int i = x; i < n; i++)
        {
            perm[i] = counter;
            counter--;
        }
    }
    for(auto& p : perm)
    {
        cout << p << ' ';
    }
    cout << nline;
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