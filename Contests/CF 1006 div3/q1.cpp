#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k ,p;
        cin >> n >> k >> p;
        if(k==0)
        {
            cout << 0 << endl;
        }
        else if(n*p >= abs(k))
        {
            int ans = ceil(1.0 * abs(k) / p);
            cout << ans << endl;
        }else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}