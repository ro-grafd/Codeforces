#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        for(int i = 0 ; i < n; i++)
        {
            if(a[i] == 1) a[i]++;
        }
        for(int i = 1; i < n; i++)
        {
            if(a[i] % a[i-1] == 0)
            {
                a[i]++;
            }
        }
        for(int i = 0 ; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}