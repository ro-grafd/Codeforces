#include<iostream>
#include<vector>
using namespace std;
void solve (int n, int k, int x)
{
    if(x!=1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i = 0 ;i < n; i++)
        {
            cout << 1 << " ";
        }
        cout <<endl;
    }
    else if(k==1 || (k==2 && n%2==1))
    {
        cout << "NO" << endl;
    }else
    {
        cout << "YES" << endl;
        cout << n/2 << endl;
        cout << (n % 2 ? 3 : 2) ;
        for(int i =0; i<n/2 -1; i++)
        {
            cout << " 2" ;
        }
        cout <<endl;
    }
    return ;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x;
        cin >> n >> k >> x;
        solve(n,k,x);
    }
    return 0;
}
// 1 2 3 4 ...... k 

