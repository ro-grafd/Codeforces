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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int minskill = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            minskill = min(minskill, a[i]);
        } 
        sort(a.begin(), a.end(), [](const auto& p, const auto& q){
            return p > q;
        });
        int count = 0, teams = 0;
        for(int i = 0; i < n;i++)
        {
            count++;
            if(count * a[i] >= x)
            {
                teams++;
                count = 0;
            }
        }
        cout << teams << endl;
    }
    return 0;
}