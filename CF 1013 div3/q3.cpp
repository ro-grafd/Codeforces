#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        if(n % 2 == 0)
        {
            cout << -1 << endl;
            continue;
        }else
        {
            vector<int>p(n);
            for(int i = 0; i < n; i++)
            {
                p[i] = (2*i % n) + 1;
            }
            for(int i = 0 ; i< n; i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}