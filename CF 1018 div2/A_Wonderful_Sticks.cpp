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
    int greater = 0, smaller = 0;
    for(char c : s)
    {
        if(c == '<') greater++;
        else if(c == '>') smaller++;
    }
    vector<int> ans;
    int counter = 1, high_counter = n;
    for(int i = n -2; i >= 0; i--)
    {
        if(s[i] == '<')
        {
            ans.push_back(counter);
            counter++;
        }else{
            ans.push_back(high_counter);
            high_counter--;
        }
    }
    if(high_counter !=0) ans.push_back(high_counter);
    // if(counter != n) ans.push_back(counter);
    reverse(ans.begin(), ans.end());
    for(int num : ans)
    {
        cout << num << " ";
    }
    cout << nline;
}
int main ()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}