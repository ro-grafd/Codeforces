#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        if(l + m < 0)
        {
            cout << -m << " " << 0 << endl;
        }else
        {
            cout << l << " " << l + m << endl;
        }
    }
    return 0;
}