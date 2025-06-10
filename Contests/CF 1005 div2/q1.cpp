#include<iostream>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        char prev = '0';
        int count =0 ;
        bool changes = false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] !=prev)
            {
                changes = true;
                count++;
            }
            prev = s[i];
        }
        cout << count << endl;
    }
    return 0;
}