#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        if(n % 2==0)
        {
            cout << -1 << endl;
        }else
        {
            cout << n << " " << 1<< " ";
            for(int i = 3; i <=n;i++)
            {
                cout << i -1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}