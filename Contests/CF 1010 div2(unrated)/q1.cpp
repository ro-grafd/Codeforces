#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>>matrix(n, vector<char>(m,0));
        int oddR = 0;
        for(int i = 0 ; i < n;  i++)
        {
            int count = 0;
            for( int j = 0 ; j < m; j++)
            {
                cin >> matrix[i][j];
                
                if(matrix[i][j]=='1')
                {
                    count++;
                }
            }
            if(count % 2 ==1) oddR++;
        }
        int oddC=0;
        for(int j = 0 ; j< m; j++)
        {
            int count = 0;
            for(int i = 0 ;i < n ; i++)
            {
                if(matrix[i][j]=='1')
                {
                    count++;
                }
            }
            if(count%2==1) oddC++;
        }
        // cout << oddR << " " << oddC << endl;
        cout << max(oddR,oddC) << endl;
    }
    return 0;
}