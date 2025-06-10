#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    int maxnumber = n;
    while(maxnumber)
    {
        for(int i = 1; i < n - 1; i++)
        {
            if(p[i] == maxnumber && (p[i-1] < p[i]) && (p[i] > p[i+1]))
            {
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                return ;
            }
        }
        maxnumber--;
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}

// 2 x 10^8 ops
// total test cases = 200
// per test case 10^6
// pi < pj & pj > pk