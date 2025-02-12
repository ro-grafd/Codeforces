#include<bits/stdc++.h>
using namespace std;

bool solve() {
    int n,k;
    cin>>n>>k;
    vector<int>input(n);
    for(int i = 0 ;i < n; i++) cin >> input[i];
    for(int i = 0; i < n; i++)
    {
        if(input[i]==k)
        {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        if(solve())
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}