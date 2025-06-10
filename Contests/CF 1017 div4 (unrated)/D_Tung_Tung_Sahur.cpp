#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string p, s;
    cin >> p >> s;
    vector<int> vp, vs;
    if(p[0] != s[0]){
        cout << "NO" << endl;
        return;
    }
    p = '.' + p;
    s = '.' + s;
    for(int i = 1; i < p.size() ; i++)
    {
        if(p[i] == p[i-1]) vp.back()++;
        else vp.push_back(1);
    }
    for(int i = 1; i < s.size() ; i++)
    {
        if(s[i] == s[i-1]) vs.back()++;
        else vs.push_back(1);
    }
    if(vp.size() != vs.size())
    {
        cout<<"NO" << endl;
        return;
    }
    for(int i = 0; i < vs.size(); i++)
    {
        if(vs[i] < vp[i] || vs[i] > 2*vp[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
}
// LLLLLRL
// LLLLRRLL