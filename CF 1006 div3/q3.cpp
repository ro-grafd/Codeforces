#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, x;
        cin >> n >> x;
        if(x > n){
            for(int i = 0 ; i < n/2; i++)
            {
                cout << 0 << " ";
            }
            cout << x << " ";
            for(int i = n/2 +1 ; i < n; i++)
            {
                cout << 0 << " ";
            }
        }else
        {
            for(int i = 0 ; i < n; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}