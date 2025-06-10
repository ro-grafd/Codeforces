#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve ()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    if(a.back() == a[0])
    {
        cout << "-1\n";
    }
    else
    {
        int partition = 0;
        while(a[partition]==a[0]) partition++;
        cout << partition << " " << n-partition << "\n";
        for(int j = 0; j < partition; j++) cout << a[j]<< " ";
        for(int j = partition; j < n; j++) cout << a[j]<< " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}