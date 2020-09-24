#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define si set<int>
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define f(i, n) for(int (i)=0;(i)<(n);(i)++)
#define dbg(x) cout<<#x<<" - "<<x<<"\n";
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9+7;
const int mxN = 1e5;
//("6", "7", "8", "9", "T", "J", "Q", "K" and "A")

int main() {
    char t;
    cin >> t;
    char f[2], s[2];
    cin >> f[0] >> f[1] >> s[0] >>  s[1];
    vector<char> ranks = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K','A'};
    if(f[1]^s[1]){
        if(f[1]==t) cout << "YES";
        else cout << "NO";
    }
    else{
        auto fi = find(ranks.begin(), ranks.end(), f[0]);
        auto sit = find(ranks.begin(), ranks.end(), s[0]);
        if( distance(ranks.begin(), fi) > 
        distance(ranks.begin(), sit) ) cout << "YES";
        else cout << "NO";
    }
}