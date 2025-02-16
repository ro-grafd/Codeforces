#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr)
{
    int n = arr.size();
    vector<int>freq(n+1);
    for(int x : arr)
    {
        freq[x]++;
    }
    vector<int>l(n+1);
    l[0] = (freq[arr[0]]==1);
    for(int i = 1; i < n; i++)
    {
        if(freq[arr[i]] == 1)
        {
            l[i] = l[i-1] + 1;
        }
    }
    int maximum = *max_element(l.begin(),l.end());
    if(maximum == 0)
    {
        cout<< "0\n";
        return ;
    }
    for(int i = 0; i < n; i++)
    {
        if(l[i]==maximum)
        {
            cout << i - l[i] + 1 + 1 << " " << i + 1 << "\n";
            return;
        }
    }

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
        for(int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        solve(input);
    }
    return 0;
}