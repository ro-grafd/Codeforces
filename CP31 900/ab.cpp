#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        int n = s.length(), count =0;
        if(s[0] == s[n-1])
        {
            cout << s << endl;
            continue;
        }
        s[0] = s[n-1];
        cout << s << endl;
    }
    return 0;
}