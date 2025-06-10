#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long n;
        cin >> n;
        vector<long long> second_mins;
        long long lowest_across = INT_MAX;
        for(int i = 0;i < n; i++)
        {
            long long m;
            cin >> m;
            vector<long long> a(m);
            for(auto& x : a)
            {
                cin >> x;
            }
            sort(a.begin(), a.end());
            second_mins.push_back(a[1]);
            lowest_across = min(lowest_across, a[0]);
        }
        sort(second_mins.begin(), second_mins.end());
        long long sum_seconds = accumulate(second_mins.begin(), second_mins.end(), 0ll);
        long long lowest_second = second_mins[0];
        long long ans = sum_seconds - lowest_second + lowest_across;
        cout << ans << endl;
    }
    return 0;
}