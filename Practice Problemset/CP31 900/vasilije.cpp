#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long n, k;
        long long x;
        cin >> n >> k >> x;
        long long total = n * (n + 1)/2 ;
        if(k*(k+1) <= x*2 && x*2 <= k * ( n-(k-1) + n))
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}