#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n; cin >>n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int val = a[0];
        for(int i = 1 ; i < n; i++)
        {
            val = val & a[i];
        }
        cout << val << endl;
    }
    return 0;
}