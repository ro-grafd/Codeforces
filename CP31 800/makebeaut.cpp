#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = a[n-1];
        int mini = a[0];
        if(mini!=maxi)
        {
            cout << "YES" << endl;
            swap(a[0], a[1]);
            swap(a[n-1],a[0]);
            for(int num : a)
            {
                cout << num << " "; 
            }
            cout << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
}