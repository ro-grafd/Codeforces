#include<iostream>
using namespace std;
bool isit(int l, int r, int d, int u)
{
    if(l!=r || u!=d) return false;
    return (l==d);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if(isit(l,u,r,d))
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}