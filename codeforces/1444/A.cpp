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

// const int MOD = 1e17;
const int mxN = 1e9;

vector<pair<ll, int>> factors(ll n){
    vector<pair<ll, int>> ans;
    int ct = 0;
    while(n%2==0){
        n/=2;
        ct++;
    }
    if(ct)
    ans.pb({2, ct});
    for(int i=3;i*i<=mxN;i+=2){
        if(n==1)break;
        ll p = i;
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){n/=p;cnt++;}
            ans.pb({i, cnt});
        }
    }
    if(n>2){
        ans.pb({n, 1});
    }
    return ans;
}

// don't forget overflow
void solve() {
    ll p, q;
    cin >> p >> q;
    if(p%q){
        cout << p << "\n";
        return;
    }
    vector<pair<ll, int>> fts = factors(q);
    ll ans = 0;
    for(auto f:fts){
        ll pwr = f.ff;
        int cnt = f.ss;
        ll pp = p;
        while(pp%q==0){
            pp/=pwr;
        }
        ans = max(ans, pp);
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