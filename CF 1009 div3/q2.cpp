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
        int n;
        cin >> n;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        cout << (long long)(sum - (n-1)) << endl;
    }
    return 0;
}