#include <iostream>
using namespace std;
#define ll long long
#define nline '\n'
#define MOD 100000007

void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            
            // If divisors are equal, print only one
            if (n / i == i)
                cout << i << " ";
                
            else // Otherwise print both
                cout << i << " " << n / i << " ";
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll a = 1;
    ll b = n - 1;
    for(ll fac = 2; fac * fac <= n; fac++)
    {
        if(n % fac == 0)
        {
            a = n / fac;
            b = n - a;
            break;
        }
    }
    cout << a << ' ' << b << nline;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
        // printDivisors(12);
    }
    return 0;
}