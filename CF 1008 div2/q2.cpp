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
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1,0);
        if(k & 1)
        {
            for(int i = 1; i <= n; i++)
            {
                a[i] = n;
            }
            a[n] = n-1;
        }else{
            for(int i = 1; i <= n; i++)
            {
                a[i] = n-1;
            }
            a[n-1] = n;
        }
        for(int i=1;i<=n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}