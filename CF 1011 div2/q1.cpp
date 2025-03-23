#include<bits/stdc++.h>
using namespace std;
bool isUniv(string s)
{
    int n = s.size();
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n-1-i])
        {
            return s[i] < s[n-1-i];
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(n==1){
            cout << "NO" <<endl;
            continue;
        }
        bool same = true;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[0])
            {
                same = false;
            }
        }
        if(same){
            cout << "NO" << endl;
            continue;
        }
        if(isUniv(s))
        {
            cout << "YES" << endl;
            continue;
        }
        cout << ((k >= 1) ? "YES" : "NO") << endl;
    }
    return 0;
}