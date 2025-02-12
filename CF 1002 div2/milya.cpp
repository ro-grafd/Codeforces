#include <bits/stdc++.h>
using namespace std;

bool is_distinct(vector<int>& a, vector<int>& b) {
    unordered_set<int> setA(a.begin(), a.end());
    unordered_set<int> setB(b.begin(), b.end());

    int counta = setA.size();
    int countb = setB.size(); 

    return (counta + countb > 3);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        if (is_distinct(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
