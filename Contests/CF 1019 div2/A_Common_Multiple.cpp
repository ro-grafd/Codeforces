#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    int n;
    cin >> n;
    unordered_set<int> s;
    vector<int> a(n);
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << nline;
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