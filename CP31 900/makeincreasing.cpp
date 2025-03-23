#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        int old = a[n-1];
        int count = 0;
        for(int i = n -2; i >= 0; i--)
        {
            int curr = a[i];
            while(a[i] >= old) 
            {
                if(a[i] == 0) break;
                a[i] = a[i] / 2;
                count++;
            }
            old = a[i];
        }
        bool possible = true;
        for(int i = 0; i+1< n; i++)
        {
            if(a[i] == a[i+1]) possible = false;
        }
        if(!possible)
        {
            cout << -1 << endl;
        }else{
            cout << count << endl;
        }
    }
    return 0;
}