#include<bits/stdc++.h>
using namespace std;
int length(string& s)
{
    int n = s.length();
    for(int i=0;i+1<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            return 1;
        }
    }
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        cout<<length(s)<<endl;
    }
    return 0;
}