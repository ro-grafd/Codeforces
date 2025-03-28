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
        long long x, n, offset;
        cin >> x >> n;
        if(n % 4 == 0)
        {
            offset = 0;
        }else if(n % 4 == 1)
        {
            offset = -n;
        }else if(n % 4 == 2)
        {
            offset = 1;
        }else
        {
            offset = 1 + n;
        }
        if(x % 2==0)
        {
            x = x + offset;
        }else{
            x = x - offset;
        }
        cout << x << endl;
    }
    return 0;
}