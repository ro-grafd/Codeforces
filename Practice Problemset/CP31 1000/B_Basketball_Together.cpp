#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define rep(i, a, b) for(int i = (a); i < (b); i++)

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll d, n;
    cin >> n >> d;
    vector<ll> power(n, 0);
    rep(i, 0, n)
    {
        cin >> power[i];
    }
    sort(power.begin(), power.end());
    ll total_remaining = n, teams = 0;
    for(int i = n -1 ; i >= 0; i--)
    {
        ll used = d / power[i] + 1;
        if(total_remaining < used) break;
        total_remaining = total_remaining - used;
        teams++;
    }
    cout << teams << nline;
    return 0;
}