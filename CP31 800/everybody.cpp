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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int j = 0;
        int count = 0;
        while(j < n-1)
        {
            if( (a[j] % 2 == 0 && a[j+1] % 2==0) ||(a[j] % 2 == 1 && a[j+1] % 2==1)  )
            {
                count++;
            }
            j++;
        }
        cout << count << endl;
    }
}