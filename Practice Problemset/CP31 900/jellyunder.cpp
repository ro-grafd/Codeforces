#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int>x(n);
        for(int i =0; i < n; i++)
        {
            cin >> x[i];
        }
        long long ans = b;
        for(int i = 0;i < n;i++)
        {
            ans += min(a-1, x[i]);
        }
        cout << ans << endl;
    }
    return 0;
}