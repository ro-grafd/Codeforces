#include <bits/stdc++.h>
using namespace std;
int funct(vector<int>& a, int k)
{
    vector<vector<int>>b;
    int n = a.size();
    int window = n/k;
    int start = 0;
    for(int end = 0; end < a.size() ; end++)
    {
        vector<int>temp;
        while(end - start +1 <= window)
        {
            temp.push_back(a[end]);
            end++;
        }
        start=end;
        end--;
        b.push_back(temp);
    }
    vector<int>final;
    for(int i = 0 ; i < b.size();i++)
    {
        if(i%2)
        {
            for(int num : b[i])
            {
                final.push_back(num);
            }
        }
    }
    final.push_back(0);
    int ans =0;
    for(int i =0 ;i < final.size();i++)
    {
        if(final[i]!=i+1)
        {
            ans = i+1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n;
        cin >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout<< funct(a,k)<<" <-ans"<<endl;
    }
    return 0;
}
