#include <bits/stdc++.h>
using namespace std;
string mirror ( string& str)
{
    string res="";
    for(int i=str.length()-1;i>=0;i--)
    {
        if(str[i]=='p')
        {
            res+= 'q';
        }
        else if(str[i]=='q')
        {
            res+='p';
        }else
        {
            res+=str[i];
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<string>input(n);
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<mirror(input[i])<<endl;
    }
    return 0;
}