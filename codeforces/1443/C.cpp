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

// don't forget overflow
void solve() {
    int n;
    cin >> n;
    ll b[n];
    vector<pair<ll, int>> a(n);
    f(i, n) {
        ll x;
        cin >> x;
        a.pb({x, i});
    }
    f(i, n) cin >> b[i];
    sort(all(a));
    reverse(all(a));
    ll ans = (int)1e9;
    ll wt = 0;
    f(i, n){
        ans = min(ans, max(a[i].ff, wt));
        int idx = a[i].ss;
        wt+=b[idx];
    }
    ans = min(ans, wt);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}