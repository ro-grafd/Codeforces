#include <bits/stdc++.h>
using namespace std;
bool canit(vector<int>& arr)
{
    for(int i=0;i+1<arr.size();i++)
    {
        if(min(arr[i],arr[i+1])*2 > max(arr[i],arr[i+1]))
        {
            return true;
        }else
        {
            return false;
        }
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if (canit(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
