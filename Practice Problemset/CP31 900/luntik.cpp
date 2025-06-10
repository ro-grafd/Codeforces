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
        vector<int> a(n);
        long long sum = 0;
        int atleast1 = 0;
        int zeros = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) atleast1++;
            if(a[i] == 0) zeros++;
        }
        if(atleast1 == 0){
            cout << 0 << endl;
            continue;
        }
        int ans = 1;
        if(n > 2 && zeros == 0)
        {
            cout << atleast1  << endl;
            continue;
        }
        if(n > 2 )
        {
            cout << zeros + atleast1 + ans  << endl;
        }else
        {
            cout << zeros + atleast1 << endl;
        }
    }
    return 0;
}
// 2 0 3 0, 2 0 3, 2 3, 2 3 0
// 3 0 2 1, 3 2 1, 3 0 2 1, 3 2 1