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
        vector<int>a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n & 1 )
        {
            cout << 4 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 2 << " " << n << "\n";
            cout << 1 << " " << 2 << "\n";
            cout << 1 << " " << 2 << "\n";
        }else
        {
            cout << 2 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
    }
    return 0;
}