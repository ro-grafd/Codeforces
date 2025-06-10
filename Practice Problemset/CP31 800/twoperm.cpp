#include<iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if(n == a && n == b)
        {
            cout << "YES" << endl;
        }else if( a + b + 2 <= n)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}