#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    for(int i = 0; i < 6; i++) {
        if(x.find(s) != string::npos) {
            cout << i << '\n';
            return;
        }
        x += x;  // double the string
    }
    cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}