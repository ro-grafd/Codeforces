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
        if(n < 4 || n % 2 == 1) 
        {
            cout << -1 << endl;
        }else{
            long long mini = ceil(n*1.0 / 6);
            long long maxi = n / 4;
            cout << mini << " " << maxi << endl;
        }
    }
    return 0;
}
// per-test = 1 x 10^8 op
// total testcases = 10^3
// for each test case = 10^5