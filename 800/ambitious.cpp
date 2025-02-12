#include<iostream>
using namespace std;
#define INT_MAX -100000
int main()
{
    int n;
    cin >> n;
    int input[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int minimum = abs(input[0]);
    for(int i = 1; i < n; i++)
    {
        // cin >> input[i];
        minimum = min( minimum, abs(input[i]));
    }
    cout << minimum << endl;
    return 0;
}