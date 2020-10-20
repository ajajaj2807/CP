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

ll fact(int n){
    ll res = 1;
    f(i, n){
        res*=(i+1);
    }
    return res;
}

// don't forget overflow
void solve() {
    int n;
    cin >> n;
    // nCn/2
    ll ans = 1;
    ll fac = fact(n-1);
    ans = 2*(fac)/n;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    // cin >> tt;
    while(tt--) solve();
}