#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            ans = __gcd(ans, abs(x-i));
        }
        cout << ans << "\n";
    }
    return 0;
}