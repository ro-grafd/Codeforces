#include<iostream>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b <= d && c <= a+d-b)
        {
            cout << (d-b) + (a + (d-b) -c) << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}