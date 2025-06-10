#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count =0;
        while(n--)
        {
            int temp;
            cin>>temp;
            if(temp%2==1) count++;
        }
        if(count % 2 == 0 )
        {
            cout << "YES"<< "\n";
        }else
        {
            cout << "NO" << "\n";
        }
        
    }
    return 0;
}