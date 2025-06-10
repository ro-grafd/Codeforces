#include <bits/stdc++.h>
using namespace std;

int minimizeOperations(vector<int>& input) {
    unordered_set<int> elements(input.begin(), input.end());
    int operations = 0;

    while (!elements.empty()) {
        // Find the MEX (minimum excluded number)
        int mex = 0;
        while (elements.count(mex)) {
            mex++;
        }

        // Remove all elements <= current MEX
        unordered_set<int> nextElements;
        for (int x : elements) {
            if (x > mex) {
                nextElements.insert(x);
            }
        }

        elements = move(nextElements);
        operations++;

        // Optimization: Stop if the set becomes empty or consists of only zero
        if (elements.empty() || (elements.size() == 1 && elements.count(0))) {
            break;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> input(n);
        for (int i = 0; i < n; i++) {
            cin >> input[i];
        }

        cout << minimizeOperations(input) << endl;
    }
    return 0;
}
