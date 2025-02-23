#include<bits/stdc++.h>
using namespace std;
bool check(long long num)
{
    long long zeros = 0;
    long long digits = 0;
    while(num)
    {
        if(num % 10 ==0)
        {
            zeros++;
        }
        digits++;
        num/=10;
    }
    return zeros == digits - 1;
}
int main()
{
    vector<long long> round_numbers;
    for(long long i = 1; i <= 999999; i++)
    {
        if(check(i)==true)
        {
            round_numbers.push_back(i);
        }
    }
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        long long ans = 0;
        for(int i = 0 ; i < round_numbers.size(); i++)
        {
            if(round_numbers[i] <= n)
            {
                ans++;
            }else
            {
                break;
            } 
        }
        cout << ans<< endl;
    }
    return 0;
}