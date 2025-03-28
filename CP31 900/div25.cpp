#include<bits/stdc++.h>
using namespace std;
const string divs[] = {"00", "25", "50", "75"};
int solve(string& n, string& s)
{
    int right = n.length() - 1;
    int ans = 0;
    while(right >= 0 && n[right] != s[1])
    {
        right--;
        ans++;
    }
    if(right < 0) return 50;
    right--;
    while(right >=0 && n[right] != s[0])
    {
        right--;
        ans++;
    }
    return (right < 0) ? 50 : ans;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        string n;
        cin >> n;
        int ans = 50;
        for(auto s : divs)
        {
            int result = solve(n, s);
            ans = min(ans, result);
        }
        cout << ans << endl;
    }
    return 0;
}