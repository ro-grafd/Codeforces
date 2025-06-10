#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int> p(2*n + 1, 0);
        vector<vector<int>> grid(n + 1, vector<int>(n + 1, 0));
        for(int i = 1; i <=n; i++)
        {
            for(int j = 1; j <=n; j++)
            {
                cin >>grid[i][j];
                p[i + j] = grid[i][j];
            }
        }
        int actual = 2*n *( 2*n + 1) / 2;
        int p1 = actual - accumulate(p.begin(), p.end() , 0ll);
        cout << p1 << " ";
        for(int i = 2; i <= 2*n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}