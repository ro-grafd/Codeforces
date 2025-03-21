#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, ans = 0;
        cin >> n;
        int a[n], count = 0;
        for(int i = 0 ; i < n; i++) 
        {
            cin >> a[i];
            if(a[i]==0) count++;
        }
        if(count == n)
        {
            cout << 0 << endl;
            continue;
        }
        int i = 0, j= n-1;
        while(a[i] == 0)
        {
            i++;
        }
        while(a[j] == 0)
        {
            j--;
        }
        int atleast = 0;
        for(int itr = i; itr <= j; itr++)
        {
            if(a[itr] == 0)
            {
                atleast++;
            }
        }
        if(atleast >= 1)
        {
            cout << 2 << endl;
        }else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}