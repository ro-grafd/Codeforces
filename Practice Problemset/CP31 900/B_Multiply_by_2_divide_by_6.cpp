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
        int n;
        cin >> n;
        int twos = 0, threes = 0;
        while(n % 2 == 0){
            n = n / 2;
            twos++;
        }
        while(n % 3 ==0)
        {
            n = n / 3;
            threes++;
        }
        if(n == 1 && twos <= threes)
        {
            cout << (threes - twos)  +  threes << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
