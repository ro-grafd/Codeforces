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
        int n;
        cin >> n;
        vector<int> a(n);
        int atleast1 = 0;
        int zeros = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1) atleast1++;
            if(a[i] == 0) zeros++;
        }
        long long ans = 0;
        ans = pow(2,zeros) * atleast1;
        cout << ans << endl;
    }
    return 0;
}
// 2 0 3 0, 2 0 3, 2 3, 2 3 0
// 3 0 2 1, 3 2 1, 3 0 2 1, 3 2 1