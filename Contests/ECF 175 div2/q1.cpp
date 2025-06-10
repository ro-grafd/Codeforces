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
        if(n < 3)
        {
            cout << n+1 << endl;
        }else
        {
            long long blocks = n/15;
            long long count = blocks*3;
            long long remainder = n % 15;
            for(long long i = 0; i <= remainder; i++)
            {
                if(i%3 == i%5)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}