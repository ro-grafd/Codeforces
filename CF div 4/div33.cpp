#include <bits/stdc++.h>
using namespace std;

int maxMonkeysSeated(int m, int a, int b, int c) {
    int seatedInRow1 = min(a, m);

    int seatedInRow2 = min(b, m);
 
    int remainingSeatsInRow1 = m - seatedInRow1;
    int remainingSeatsInRow2 = m - seatedInRow2;
    int remainingSeats = remainingSeatsInRow1 + remainingSeatsInRow2;
    
    int seatedFromC = min(c, remainingSeats);
    
    return seatedInRow1 + seatedInRow2 + seatedFromC;
}

int main() {
    int n;
    cin>>n;
    int m, a, b, c;
    
    vector<int>output(n);
    for(int i=0;i<n;i++){
        cin >> m >> a >> b >> c;
        output[i]=maxMonkeysSeated(m, a, b, c);
    }
    for( const int& res: output)
    {
        cout<<res<<endl;
    }
    return 0;
}
