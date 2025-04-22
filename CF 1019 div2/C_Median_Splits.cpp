#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

int find(int start, int diff, vector<int>& a, int n, int k)
{
    int count = 0;
    for(int i = start; i>=0 && i < n; i += diff)
    {
        count += (a[i] <= k);
        count -= (a[i] > k);
        if(count >= 0) return i;
    }
    return diff == 1 ? n : -1;
}

bool funcf2(vector<int>& a, int n, int k)
{
    int l = find(0, 1, a, n, k);
    if(l % 2 == 0 && l + 1 < n && a[l+1] > k) l++;
    int r = find(l+1, 1, a, n, k);
    return r < n - 1;
}
bool funcl2(vector<int>& a, int n, int k)
{
    int r = find(n-1, -1, a, n, k);
    if((n-r) % 2 && r - 1 >= 0 && a[r-1] > k) r--;
    int l = find(r-1, -1, a, n, k);
    return l > 0;
}
bool funco2(vector<int>& a, int n, int k)
{
    int l = find(0, 1, a, n, k);
    int r = find(n-1, -1, a, n, k);
    return r - l  > 1;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool first2 = funcf2(a, n, k);
    bool last2 = funcl2(a, n, k);
    bool outer2 = funco2(a, n, k);
    cout << ((first2 || last2 || outer2) ? "YES" : "NO") << nline;
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