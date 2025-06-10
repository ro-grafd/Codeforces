#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long>a(n);
        for(int i = 0 ;i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int longest = 1;
        int maximum = 1;
        for(int i = 1; i < n; i++)
        {
            if( a[i] - a[i-1] > k)
            {
                longest=1;
            }else
            {
                longest++;
            }
            maximum = max(maximum, longest);
        }
        cout << n - maximum << "\n";
    }
    return 0;
}