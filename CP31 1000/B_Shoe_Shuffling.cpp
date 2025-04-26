#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)
#define vi vector<int>
#define vii vector<ll>

void solve()
{
    int n;
    cin >> n;
    vii s(n), perm(n);
    rep(i, 0, n) 
    {
        cin >> s[i];
        perm[i] = i + 1;
    }
    bool ans = true;
    ll left = 0, right = 0;
    while(right < n)
    {
        while(right + 1 < n && s[right] == s[right+1])
        {
            right++;
        }
        if(left == right)
        {
            ans = false;
        }else
        {
            rotate(perm.begin() + left, perm.begin() + right, perm.begin() + right + 1);
        }
        left = right + 1;
        right++;
    }
    if(ans)
    {
        for(auto& num : perm)
        {
            cout << num << ' ';
        }
        cout << nline;
        return;
    }else
    {
        cout << -1 << nline;
    }
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