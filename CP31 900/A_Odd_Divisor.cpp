#include<iostream>
#include <math.h>       /* sqrt */
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long int n;
        cin >> n;
        while(n % 2==0)
        {
            n = n / 2;
        }  
        if(n > 1){
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}