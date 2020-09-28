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

void solve() {
    ll n;
    cin >> n;
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    int sq = sqrt(n);
    if(sq*sq == n)
    cout << 2*sq-2 << "\n";
    else if(sq*(sq+1)>=n)
    cout << sq+sq-1 << "\n";
    else cout << sq+sq << "\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 5 - 1,5 or 1236
// 42 - 7*6 ->  6+5
//
// 1337 - 36*37 -> 35+36
// 35+37
// 625 -> 25*25 - 24+24