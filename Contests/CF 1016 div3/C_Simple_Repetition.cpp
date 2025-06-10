#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int x, k;
        cin >> x >> k;
        if(k > 1 && x > 1)
        {
            cout << "NO" << endl;
        }else if(k == 1)
        {
            if(is_prime(x))
            {
                cout<< "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << ((k == 2) ? "YES" : "NO" ) << endl;
        }
    }
    return 0;
}