#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int  foundTwo = 0, foundOdd = 0;
        bool possibleFive = false, possibleFour  = false, possibleThree = false;
        long long prod = 1, minThree = INT_MAX, minFive = INT_MAX, minFour= INT_MAX;
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
            // prod *= (long long)a[i];
            if(a[i] % 2 == 0){
                foundTwo++;
            }else{
                foundOdd++;
            }
            if(a[i] % 3 != 0)
            {
                minThree = min((int)minThree, 3 - a[i] % 3);
            }else if(a[i] % 3 ==0){
                possibleThree = true;
            }
            if(a[i] % 5 !=0){
               minFive = min((int) minFive, 5 - a[i] % 5);
            }else if(a[i] % 5 ==0){
                possibleFive = true;
            }
            if(a[i] % 4 == 0) possibleFour = true;
            else if(a[i] % 4 != 0){
                minFour = min((int) minFour, 4 - a[i] % 4);
            }
        }
        if(k == 2)
        {
            if(foundTwo >= 1) cout << 0 << endl;
            else cout << 1 << endl;
            continue;
        }
        else if(k == 3)
        {
            if(possibleThree ) cout << 0 << endl;
            else{
                cout << minThree << endl;
            }
            continue;
        }else if(k == 4)
        {

            if(foundTwo >= 2) cout << 0 << endl;
            else if(possibleFour) cout << 0 << endl;
            else{
                if(foundOdd >= 1 && foundTwo >=1) cout << 1 << endl;
                else {
                    int ans = min(2, (int)minFour); // cos n >= 2
                    cout << ans << endl;
                }
            }
            continue;
        }else{
            if(possibleFive) cout << 0 << endl;
            else cout << minFive << endl;
            continue;
        }
    }
    return 0;
}