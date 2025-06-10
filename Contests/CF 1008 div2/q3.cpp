#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int> b(n*2);
        for(int i = 0; i < n*2; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        int s = 0;
        vector<int>a;
        for(int i = 1; i < n; i++)
        {
            a.push_back(b[i]);
            a.push_back(b[i+n-1]);
            s += b[i+n-1] - b[i];
        }
        a.push_back(s + b[n*2 -1] + b[0]);
        a.push_back(b[0]);
        cout << b[n*2 -1] << " ";
        for(int i = 0; i<n*2; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// a has i = 1 - (n-1) + n - ()