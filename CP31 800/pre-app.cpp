#include<iostream>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = 0 ;
        int right = n - 1;
        while(left < right && s[left] != s[right])
        {
            left++;
            right--;
        }
        cout << right - left + 1 <<endl;
    }
    return 0 ;

}