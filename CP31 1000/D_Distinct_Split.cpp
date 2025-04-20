#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    int n;
    cin >> n;
    char s[n];
    unordered_map<char, int> s_left, s_right;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        s_right[s[i]]++;
    }
    int ans = s_right.size();
    for(int left = 0; left < n; left++)
    {
        s_right[s[left]]--;
        s_left[s[left]]++;
        if(s_right[s[left]] == 0) s_right.erase(s[left]);
        ans = max(ans, (int)(s_left.size() + s_right.size())); 
    }
    cout << ans << nline;
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