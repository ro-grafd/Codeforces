#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& input)
{
    int maxdiff = INT_MAX;
    int n = input.size();
    int operations = INT_MAX;
    for(int i = 1; i < n; i++)
    {
        if(input[i] < input[i-1])
        {
            cout << 0 <<endl;
            return;
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(input[i] - input[i-1] < maxdiff)
        {
            maxdiff= input[i] - input[i-1];
            operations = min(operations, (maxdiff/2)+1);
        }
    }
    cout << operations <<endl;
    return ;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> input(n);
        for(int i = 0 ;i  < n ; i ++)
        {
            cin >> input[i];
        }
        solve(input);
    }
    return 0;
}

// random
// 