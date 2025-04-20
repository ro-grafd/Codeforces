#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long tt;
    cin >> tt;
    while(tt--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];   
        }
        vector<long long> c1(2*n + 1, 0), c2(2*n + 1, 0);
        long long count = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1])
            {
                count++;
            }else{
                c1[a[i-1]] = max(c1[a[i-1]], count);
                count = 1;
            }
        }
        c1[a[n-1]] = max(c1[a[n-1]], count);
        count = 1;
        for(int i = 1; i < n; i++)
        {
            if(b[i] == b[i-1])
            {
                count++;
            }else{
                c2[b[i-1]] = max(c2[b[i-1]], count);
                count = 1;
            }
        }
        c2[b[n-1]] = max(c2[b[n-1]], count);
        long long ans = 0;
        for(int i = 1; i <= 2*n; i++)
        {
            ans = max(ans, c1[i] + c2[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}