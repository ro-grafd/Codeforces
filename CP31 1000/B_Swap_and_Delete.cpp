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
        string s;
        cin >> s;
        int n = s.length(), ones = 0, zeros = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1') ones++;
            else zeros++;
        }
        int tL = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1' && zeros > 0)
            {
                zeros--;
                tL++;
            }else if(s[i] == '0' && ones > 0){
                ones--;
                tL++;
            }else{
                break;
            }
        }
        cout << n - tL << endl;
    }
    return 0;
}

// deletion cost = 1, swapping = 0
// 011 , ones = 2, zeros =1
// 10