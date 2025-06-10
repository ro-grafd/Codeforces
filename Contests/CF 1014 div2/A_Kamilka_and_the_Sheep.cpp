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
        int minn = INT_MAX;
        int maxx = -1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            minn = min(a[i] , minn);
            maxx = max(a[i], maxx);
        }
    
        cout << maxx-minn << endl;
    }
    return 0;
}