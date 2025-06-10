#include<bits/stdc++.h>
using namespace std;
long long binarySearch(long long int target, vector<long long int>& arr, long long int n)
{
    long long int low = 0;
    long long int high = n -1 ;
    while(low <= high)
    {
        long long int mid = low + (high - low) /2;
        if(arr[mid] <= target)
        {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long int n, k;
        long long int x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<long long int> prefix(n);
        prefix[0] = 0;
        for(int i = 1 ; i < n; i++)
        {
            prefix[i] = prefix[i-1] + a[i-1];
        }    
        long long int aSum = prefix[n-1] + a[n-1];
        long long int totalSum = k * aSum;
        if(totalSum < x){
            cout << 0 << endl;
            continue;
        }
        long long int ans = 0;
        long long remaining = totalSum - x;
        for(int time = 0 ; time < k; time++)
        {
            long long int toCompareTill = remaining - (long long)time * aSum;
            if(toCompareTill < 0) continue;
            int count = binarySearch(toCompareTill, prefix, n);
            ans += count;
        }
        cout << ans << endl;
    }
    return 0;
}