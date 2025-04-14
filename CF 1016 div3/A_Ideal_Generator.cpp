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
        int k;
        cin >> k;
        if(k % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}