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
    ll t;
    cin >> n >> t;
    pair<ll, int> w[n];
    f(i, n){
        ll x;
        cin >> x;
        w[i] = {x, i};
    }
    sort(w, w+n);
    // f(i, n) cout << w[i].ff << " ";
    // cout << "\n";

    if(w[0].ff>t){
        cout << "-1\n";
        return;
    }
    ll c = 0;
    vi ans;
    ll lb = ceil((float)t/2);
    int i = n-1;
    while(i>=0){
        if(c<=t&&c>=lb){
            break;
        }
        // dbg(i);
        // dbg(w[i].ff);
        if(c+w[i].ff>t){
            i--;
            continue;
        }
        c+=w[i].ff;
        ans.pb(w[i].ss);
        --i;
    }
    if(c<lb||c>t){
        cout << "-1\n";
        return;
    }
    // dbg(c);
    cout << ans.size() << "\n";
    for(auto a:ans) cout << a+1 << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}