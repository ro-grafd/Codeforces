#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        int nos = 0;
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
            nos += ( a[i] % 2 ==0);
        }
        int front = 0;
        if(nos%2==1)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i = 0 ; i< n; i++)
        {
            if(a[i] % 2 == 0)
            {
                front++;
                nos--;
            }
            if(front == nos )
            {
                cout << i+1 << endl;
                break;
            }
        }
        // cout << -1 << endl;
    }
    return 0;
}