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
        string s;
        cin >> s;
        int ans = 1, curr = 1;
        for(int i= 1; i < n; i++)
        {
            if(s[i] != s[i-1]) curr = 1;
            else curr++;
            ans = max(ans, curr);
        }
        cout << ans + 1 << endl;
    }
    return 0;
}