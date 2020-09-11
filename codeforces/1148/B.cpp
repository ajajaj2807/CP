#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mset(arr, val) memset(arr, val, sizeof(arr))

const int MOD = 1e9+7;
const int mxN = 1e5;


int main() {
    int n, m, ta, tb, k;
    cin >> n >> m >> ta >> tb >> k;
    int ans=0;
    vector<int> ab, bc;
    for(int i=0, x;i<n;++i){
        cin >> x;
        ab.pb(x);
    }
    for(int i=0, x;i<m;++i){
        cin >> x;
        bc.pb(x);
    }

    if(k>=n){
        cout << -1;
        return 0;
    }
    for(int x=0;x<=k;++x){
        auto pos = lower_bound(bc.begin(), bc.end(), ab[x]+ta);
        int npos = pos-bc.begin()+k-x;
        if( npos >= m ){
            cout << -1;
            return 0;
        }
        int ca = bc[npos]+tb;
        ans = max(ans, ca);
    }
    cout << ans;
}
