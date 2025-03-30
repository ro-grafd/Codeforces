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
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        int f1 = 0, f2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                if(a[i] == '1') f2--;
                if(b[i] == '0') f1++;
            }else
            {
                if(a[i] == '1') f1--;
                if(b[i] == '0') f2++;
            }
        }
        cout << ((f1 >= 0 && f2 >= 0) ? "YES" : "NO")<< endl;
    }
    return 0;
}