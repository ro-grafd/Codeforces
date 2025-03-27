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
        int a[n];
        int t[] = {0,1,3,2,5};
        unordered_map<int,int>h1;
        h1[0] = 3;
        h1[1] = 1;
        h1[2] = 2;
        h1[3] = 1;
        h1[5] = 1;
        unordered_map<int,int>m1; 
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for(int i = 0 ; i < n; i++)
        {
            m1[a[i]]++;
            bool possible = true;
            for(int num : t)
            {
                if(h1[num] > m1[num])
                {
                    possible = false;
                    break;
                }
            }
            if(possible)
            {
                cout << (i+1) << endl;
                found = true;
                break; 
            }
        }
        if(!found)cout << 0 << endl;
    }
    return 0;
}