#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, p;
        cin >> n >> p;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        vector<pair<long long, long long>> v(n);
        for(int i = 0; i < n; i++)
        {
            v[i] = {b[i], a[i]};
        }
        sort(v.begin(), v.end());
        long long minimum_cost = p;
        long long already_shared = 1;
        for(auto i : v)
        {
            long long can_share = i.second;
            long long sharing_cost = i.first;
            // compare with the owner itself first
            if(sharing_cost >= p) break;
            if(already_shared + can_share > n)
            {
                minimum_cost += (n - already_shared) * sharing_cost;
                already_shared = n;
                break;
            }else
            {
                minimum_cost += can_share*sharing_cost;
                already_shared += can_share;
            }
        }
        minimum_cost += (n - already_shared) * p;
        cout << minimum_cost << endl;
    }
    return 0;
}