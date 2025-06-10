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
        vector<long long> a(n);
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        long long m = a[0];
        long long g = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] % m != 0) continue;
            g = __gcd(g, a[i]);
        }
        if(g == m)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}