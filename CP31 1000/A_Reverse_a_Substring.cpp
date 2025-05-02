#include <bits/stdc++.h>
using namespace std;
#define Assassin
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const ll MOD = 1e9 + 7;
const ll INF = LONG_LONG_MAX;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

#define pb push_back
#define mp make_pair
#define nline '\n'
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rev(i, a, b) for(int i = (a); i >= (b); i--)

#ifdef Assassin
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x) ;
#endif

int main ()
{
    fastio();
    int n;
    cin >> n;
    string s;
    cin >> s;
    string copy_s = s;
    sort(copy_s.begin(), copy_s.end());
    if(copy_s == s)
    {
        cout << "NO" << nline;
    }
    else
    {
        int left, right;
        int n = s.size();
        int i = 0;
        while(s[i] == copy_s[i])
        {
            i++;
        }
        left = i + 1;
        char toFind = copy_s[i];
        for(int k = i; k < n; k++)
        {
            if(s[k] == toFind)
            {
                right = k + 1;
                break;
            }
        }
        reverse(s.begin() + left - 1, s.begin() + right);
        cout << "YES" << nline;
        cout << left << ' ' << right << nline;
    }
    return 0;
}