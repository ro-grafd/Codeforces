#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& a, vector<int>& b, int query) {
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    long long sumB = accumulate(b.begin(), b.end(), 0LL);

    long long totalSum = sumA * sumB; // Total sum of the grid

    // Delta required to adjust total_sum to match query
    long long delta = totalSum - query;

    // Check if there's any cell (i, j) such that the delta matches the row-col adjustment
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            long long contribution = a[i] * b[j];
            long long reduced_sum = delta + contribution;

            // If delta matches the expected adjustment, return true
            if (reduced_sum % b[j] == 0 && reduced_sum % a[i] == 0) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        cout << (isPossible(a, b, query) ? "YES" : "NO") << endl;
    }

    return 0;
}
