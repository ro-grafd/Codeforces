#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        int n = s.length(), zeros = 0, ones = 0;
        for(char c : s)
        {
            if(c == '0') zeros++;
            else ones++;
        }
        if(zeros == 0 || ones == 0){
            cout << "NET" << endl;
            continue;
        }  if(min(zeros, ones) % 2 == 0)
        {
            cout << "NET" << endl;
        }else{
            cout << "DA" << endl;
        }
    }
    return 0;
}

// 1 x 10^8
// total tc = 10^3
// per tc = 10^5
// len(s) <= 10^2
// 0 0 0 0  1 1 1 1 1 1 1 1 alice loses if even times then alice loses
// 100 01 1 10 0 001
// 0 0 1 1