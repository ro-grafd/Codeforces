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
    int n, k;
    cin >> n >> k;
    char s[n];
    rep(i, 0, n) cin >> s[i];
    int left = 0, right = 0, repaint = n, white = 0, black = 0;
    while(right < n)
    {
        // if(s[right] == 'B')
        // {
        //     black++;
        //     if(black == k)
        //     {
        //         cout<< 0 << nline;
        //         return;
        //     }
        // }
        if(s[right] == 'W')
        {
            white++;
            // black = 0;
        }
        if(right - left + 1 == k)
        {
            repaint = min(repaint, white);
            if(s[left] == 'W') white--;
            left++;
        }
        right++;
    }
    cout << repaint << nline;
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




