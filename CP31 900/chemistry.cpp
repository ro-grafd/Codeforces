#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>counts(26,0);
        for(char c :s )
        {
            counts[c-'a']++;
        }
        int odds = 0;
        for(int num : counts)
        {
            if(num % 2)
            {
                odds++;
            }
        }
        if(odds - 1 <=k )
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}