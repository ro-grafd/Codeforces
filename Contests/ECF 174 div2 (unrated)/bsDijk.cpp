#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int maximumwaterHeight(int width, int maxJump, long long maxEnergy, int numRocks, const vector<int>& x, 
    const vector<int>& heights)
{
    // 0) Edge case: no rocks at all → only direct bank→bank jump
    if (numRocks == 0) 
    {
        long long d = width;
        if (d <= maxJump && d*d <= maxEnergy) 
        {
            // you can always cross, so water can rise arbitrarily
            return 1000000000;
        }
        // otherwise never possible
        return -1;
    }

    // 1) Gather + sort distinct rock‐heights
    vector<int> uniqH = heights;
    sort(uniqH.begin(), uniqH.end());
    uniqH.erase(unique(uniqH.begin(), uniqH.end()), uniqH.end());

    // 2) Feasibility check at water = W via O(m^2) DP
    auto feasible = [&](int W) {
        // collect all non‐submerged stones + banks
        vector<int> P;
        P.reserve(numRocks + 2);
        P.push_back(0);
        for (int i = 0; i < numRocks; ++i) 
        {
            if (heights[i] > W)
                P.push_back(x[i]);
        }
        P.push_back(width);
        sort(P.begin(), P.end());

        int m = P.size();
        vector<long long> dp(m, LLONG_MAX);
        dp[0] = 0;

        for (int i = 0; i < m; ++i) 
        {
            if (dp[i] > maxEnergy) 
                continue;
            for (int j = i+1; j < m; ++j) 
            {
                long long dist = (long long)P[j] - P[i];
                if (dist > maxJump) 
                    break;
                long long cost = dist*dist;
                dp[j] = min(dp[j], dp[i] + cost);
            }
        }
        return dp[m-1] <= maxEnergy;
    };

    // 3) Binary‐search over those distinct heights
    int lo = 0, hi = int(uniqH.size()) - 1, ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (feasible(uniqH[mid])) {
            ans = uniqH[mid];
            lo  = mid + 1;
        } else {
            hi  = mid - 1;
        }
    }
    return ans;
}