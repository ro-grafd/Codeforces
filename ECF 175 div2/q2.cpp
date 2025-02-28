#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long n, x, k;
        string s;
        cin >> n >> x >> k;
        cin >> s;
        vector<int> pref(n+1,0);
        // cout << pref[0] << endl;
        for(int i = 1;i <= n;i++)
        {
            pref[i] = pref[i-1] + ((s[i-1]=='R') ? 1 : -1);
            // cout << pref[i];
        }
        long long first_reset = -1;
        for(int i =1 ; i<=n; i++)
        {
            if(x + pref[i]==0)
            {
                first_reset=i;
                break;
            }
        }
        if(first_reset > k || first_reset==-1)
        {
            cout << 0 << endl;
            continue;
        }
        long long resets = 1;
        long long timeused = first_reset;
        
        // now we reached zero
        long long backto_zerotime = -1;
        for(int j =1 ; j <=n ;j++)
        {
            if(pref[j]==0)
            {
                backto_zerotime = j;
                break;
            }
        }
        if(backto_zerotime==-1)
        {
            cout << resets << endl;
            continue;
        }
        long long cycles = (k - timeused)/backto_zerotime;
        resets+= cycles;
        cout << resets << endl;
    }
    return 0;
}