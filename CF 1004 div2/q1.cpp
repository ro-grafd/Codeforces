#include<bits/stdc++.h>
using namespace std;
// int trailing_nines(int n)
// {
//     int count = 0;
//     while(n % 10 == 9)
//     {
//         count++;
//         n=n/10;
//     }
//     return count;
// }
bool exists(int x ,int y)
{
    if(y == x+1) return true;
    if(y > x +1) return false;
    int diff = x -y;
    diff++;
    if(diff % 9==0) return true;
    return false;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(exists(x,y))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}