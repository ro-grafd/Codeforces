#include<iostream>

using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        int x=0;
        int number;
        for(int i = 0 ;i < n; i++)
        {
            cin >> number;
            x = x^number;
        }
        if(n%2==1)
        {
            cout << x << endl;
        }else
        {
            if(x == 0)
            {
                cout << 1 << endl;
            }else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}