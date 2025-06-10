#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt; cin >> tt;
    while(tt--)
    {
        string s, t;
        cin >> s >> t;
        vector<int>freq(26,0);
        for(char c : t)
        {
            freq[c-'A']++;
        }
        for(int j = s.length() - 1; j >=0; j--)
        {
            char tosearch = s[j];
            if(freq[tosearch - 'A'] > 0)
            {
                freq[tosearch - 'A']--;
            }else{
                s[j] = '.';
            }
        }
        string constructed = "";
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] != '.')
            {
                constructed +=  s[i];
            }
        }
        if(constructed == t)
        {
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}