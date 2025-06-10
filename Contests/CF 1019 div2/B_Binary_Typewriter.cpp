#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int typing_cost = n, switches = 0,temp1 = 0, temp2 = 0, can_reduce = 0;
    char previous_button = '0';     // Intiial button hand on
    for(int i = 0; i < n; i++)
    {
        char current_button = s[i];
        if(current_button != previous_button)
        {
            switches++;
            if(previous_button == '0' && current_button == '1')
            {
                temp1++;
            }else if(previous_button == '1' && current_button == '0')
            {
                temp2++;
            }
        }
        previous_button = current_button;
    }
    if(temp1 >= 2 || temp2 >= 2)        // 1010 or 0101 -> 1001 and 0011
    {
        can_reduce = 2;
    }else if(switches >= 2)             // above doesnt then this max 1 can we reduce
    {
        can_reduce = 1;
    }
    ll ans = typing_cost + switches - can_reduce;
    cout << ans << nline;
}
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}