#include<bits/stdc++.h>
using namespace std;
bool isTriangle(int a, int b, int c)
{
    if(a+b > c && a+c > b && b+c> a)
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int x;
        cin >> x;
        int low = 2;
        int high = x-1;
        int y = -1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            int xo = mid^x;
            if(isTriangle(mid,x,xo))
            {
                y = mid;
                break;
            }else if(mid > xo)
            {
                high = mid - 1;
            }else
            {
                low = mid + 1;
            }
        }
        cout << y << endl;
    }
    return 0;
}