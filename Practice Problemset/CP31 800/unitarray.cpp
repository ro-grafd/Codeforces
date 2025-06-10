#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>input(n);
        int countneg = 0;
        int countpos = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> input[i];
            if(input[i]>0)
            {
                countpos++;
            }else
            {
                countneg++;
            }
        }
        int moves = 0;
        while(countpos < countneg || countneg%2==1)
        {
            moves++;
            countpos++;
            countneg--;
        }
        cout << moves<<endl;
    }
    return 0;
}