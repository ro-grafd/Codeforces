#include<bits/stdc++.h>
using namespace std;
#define pb push_back;
#define ll long long;
#define MOD 1000000007 // 1e9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> counts(26,0);
        for(char c :s )
            counts[c-'a']++;

        int odds = 0;
        for(int num : counts)
            if(num % 2)
                odds++;

        if(odds - 1 <= k)
        {
            cout << "YES" << '\n';
        }else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}