#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int lastoccurence = n -1, ans = n -1;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] != '0')
            {
                lastoccurence = i;  // 103 7 00
                break;
            }
        }
        for(int i = 0 ; i < lastoccurence; i++)
        {
            if(s[i] == '0')
            {
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// 1 0 3 7 0 0    // 6 - (1 + 1) = 4