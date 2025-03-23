#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool firstNonzero = true;
    bool lastNonzero = true;
    bool allnonzeros = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0){
            allnonzeros = false;
        }
    }
    if(allnonzeros)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    if(a[0] > 0)
    {
        cout << 2 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    if(a[n-1] > 0)
    {
        cout << 2 << endl;
        cout << 1 << " "<< n-1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    if(a[0] == 0 && a[n-1] ==0)
    {
        cout << 3 << endl;
        cout << 3 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
