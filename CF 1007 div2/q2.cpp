#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long n;
        cin >> n;
        long long total = (1LL * n *(n + 1))/2;
        if(ceil((double)sqrt(total)) == floor((double)sqrt(n)))
        {
            cout << -1 << endl;
        }else
        {
            cout << 2 << " " << 1 << " ";
            for(int i = 3 ; i <= n; i++)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}