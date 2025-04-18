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
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> hp(n);
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hp[i] = {x, i + 1};
            hp[i].first %= k;
            if(hp[i].first == 0){
                hp[i].first = k;
            }
        }
        sort(hp.begin(), hp.end(), [](const auto& p1, const auto& p2) {
            if (p1.first == p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        });
        
        for(auto& itr : hp)
        {
            cout << itr.second << " ";
        }
        cout << "\n";
    }
    return 0;
}