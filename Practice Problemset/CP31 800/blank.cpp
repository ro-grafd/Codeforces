#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        int stream = 0;
        int maxstream = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x == 0)
            {
                stream++;
            }else
            {
                stream = 0;
            }
            maxstream = max(maxstream,stream);
        }
        cout << maxstream << endl;
    }
    return 0;
}
