#include<bits/stdc++.h>#
using namespace std;

int main()
{
    int tt;
    int dx[4]= {-1,1,-1,1};
    int dy[4]= {-1,-1,1,1};
    while(tt--)
    {
        int a,b;
        cin >> a >> b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int,int>>s1,s2;
        for(int i = 0 ; i < 4; i++)
        {
            s1.insert({x1 + dx[i]*a , y1 + dy[i]*b});
            s2.insert({x2 + dx[i]*a , y2 + dy[i]*b});

            s1.insert({x1 + dx[i]*b , y1 + dy[i]*a});
            s2.insert({x2 + dx[i]*b , y1 + dy[i]*a});
        }
        int ans = 0;
        for( auto itr : s1)
        {
            if(s2.find(itr)!=s2.end())
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}