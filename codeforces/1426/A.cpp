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
    int x, n;
    cin >> n >> x;
    if(n<=2) {cout << 1 << "\n";return;}
    n-=2;
    cout << ceil((float)n/x)+1 << "\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 34
// 12

// 3
// 123
// 11