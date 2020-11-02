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
    ll p, f, cs, cw, s, w;
    cin >> p >> f >> cs >> cw >> s >> w;
    if(w<s){
        // swap (keep swords cheaper)
        swap(w, s);
        swap(cs, cw);
    }
    ll ans = 0;
    f(i, min(cs, p/s)+1){
        ll w1 = min(cw, (p-s*i)/w);
        ll s2 = min(cs-i, f/s);
        ll w2 = min(cw-w1, (f-s*s2)/w);
        ans = max(ans, (ll)i+s2+w1+w2);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}