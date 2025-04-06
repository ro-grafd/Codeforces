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
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++) cin >> a[i];
        long long maximum = 0;
        long long minimum = 0;
        for(int i = 0; i < n; i++)
        {
            maximum += ceil((a[i] * 1.0 / x));
            minimum += a[i];
        }
        minimum = ceil(minimum * 1.0 / x);
        cout << minimum << " " << maximum << endl;
    }
    return 0;
}