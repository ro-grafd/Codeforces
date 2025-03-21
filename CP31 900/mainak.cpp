#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n];
        int mini = 1000, maxi = -1;
        for(int i = 0 ; i < n; i++) 
        {
            cin >> a[i];
        }
        int m1 = -1, m2 = -1, m3 = -1;
        for(int i = 1; i < n ;i++)
        {
            m1 = max(m1, a[i] - a[0]);
        }
        for(int i = 0; i < n-1; i++)
        {
            m2 = max(m2, a[n-1] - a[i]);
        }
        for(int i = 0 ; i< n-1; i++)
        {
            m3 = max(m3, a[i] - a[i+1]);
        }
        int ans = 0;
        ans = max({m1,m2,m3,a[n-1]-a[0]});
        cout << ans << endl;
    }
    return 0;
}