#include<bits/stdc++.h>
using namespace std;
string plural(string& s)
{
    s.pop_back();
    s[s.size()-1]='i';
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        cout<<plural(s)<<endl;
    }
    return 0;
}