#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a-b);
        if(b > a){
            swap(a,b);
        }
        if(diff == 0){
            cout << "0 0" << endl;
            continue;
        }
        long long excitement = diff;
        long long moves = min(b % diff,diff - (b% diff));
        cout << excitement << " " << moves << endl;
    }
    return 0;
}