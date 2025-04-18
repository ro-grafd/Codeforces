#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long long contiguous = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= q)
            {
                contiguous++;
            }else
            {
                if(contiguous >= k)
                {
                    long long n = (contiguous - k + 1);
                    ans += (n*(n + 1)) / 2;
                }
                contiguous = 0;
            }
        }
        if(contiguous >= k)
        {
            long long n = (contiguous - k + 1);
            ans += (n*(n+1) / 2);
        }
        cout << ans << '\n';
    }
    return 0;
}