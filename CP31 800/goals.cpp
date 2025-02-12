#include<bits/stdc++.h>
using namespace std;

int solve() {
    
    int total = 0;
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int num;
        cin>>num;
        total+=num;
    }
    return (-1)*total;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout<<solve()<<endl;
    }
    return 0;
}