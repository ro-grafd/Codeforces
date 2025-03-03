#include<bits/stdc++.h>
using namespace std;
bool isperfect(long long total)
{
    return ceil((double)sqrt(total)) == floor((double)sqrt(total));
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long n;
        cin >> n;
        long long total = (1LL * n *(n + 1))/2;
        if(isperfect(total))
        {
            cout << -1 << endl;
            continue;
        }
        set<int,greater<int>> st;
        for(int i =1 ; i<=n; i++)
        {
            st.insert(i);
        }
        long long prefix = 0;
        vector<int>result;
        while(!st.empty())
        {
            for(auto itr = st.begin(); itr!=st.end();itr++)
            {
                if(!isperfect(prefix + *itr))
                {
                    prefix = prefix + (*itr);
                    result.push_back(*itr);
                    st.erase(*itr);
                    break;
                }
            }
        }
        for(int num : result)
        {
            cout<< num << " ";
        }
        cout << endl;
    }
    return 0;
}