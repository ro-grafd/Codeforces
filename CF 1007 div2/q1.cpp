#include<iostream>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long k;
        cin >> k;
        if(k==1 || k%3==1)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}