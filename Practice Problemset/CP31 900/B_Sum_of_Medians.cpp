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
        int n, k;
        cin >> n >> k;
        vector<int> a(n*k);
        for(int i = 0; i < n*k; i++) cin >> a[i];
        int ptr = n * k; //this is beyond last index
        long long sum = 0;
        while(k--)
        {
            ptr = ptr - (n / 2 + 1);
            sum += a[ptr];
        }
        cout << sum << endl;
    }
    return 0;
}