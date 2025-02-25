#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // int smalls = 0;
        // int bigs = 0;
        int smalls = count(s.begin(),s.end(),'-');
        int bigs = n - smalls;
        // cout << smalls << endl << bigs << endl;
        int ans=0;
        if(smalls < 2 || bigs == 0 )
        {
            cout << 0  << endl;
            continue;
        }
        cout << (1LL * (smalls / 2) * (smalls - (smalls / 2)) * bigs) << endl;
    }
    return 0;
}