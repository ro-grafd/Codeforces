#include <bits/stdc++.h>
using namespace std;

void solve(const vector<string>& lines, int n) {
    vector<int> st;
    st.reserve(n);

    for (int i = 0; i < n; i++) 
    {
        const string& line = lines[i];
        if (line.substr(0, 4) == "push") 
        {
            // push X
            int x = stoi(line.substr(5));
            st.push_back(x);

        } else if (line == "pop") 
        {
            // pop
            if (!st.empty()) st.pop_back();

        } else if (line.rfind("remove_lower", 0) == 0) 
        {
            // remove_lower X  => remove all < X
            int x = stoi(line.substr(13));
            st.erase(remove_if(st.begin(), st.end(), [&](int v){ 
                    return v < x; 
                }),
                st.end()
            );

        } else if (line.rfind("remove_upper", 0) == 0) 
        {
            // remove_upper X  => remove all > X
            int x = stoi(line.substr(13));
            st.erase(remove_if(st.begin(), st.end(), [&](int v){ 
                    return v > x; 
                }),
                st.end()
            );
        }
        // print current top or EMPTY
        if (st.empty()) 
        {
            cout << "EMPTY\n";
        } else 
        {
            cout << st.back() << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> lines(n);
    for (int i = 0; i < n; i++) {
        getline(cin, lines[i]);
    }

    solve(lines, n);
    return 0;
}