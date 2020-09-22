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

const int MOD = 1e9+7;
const int mxN = 1e5;

void solve() {
    int n, id=0;
    map<int, int> dr;
    cin >> n;
    int l[n], r[n];
    f(i, n) {cin >> l[i];if(l[i]==1)id--;else id++;}
    f(i, n) {cin >> r[i];if(r[i]==1)id--;else id++;}
    int d=0;
    if(id==0){
        cout << 0 << "\n";
        return;
    }
    for(int i=0;i<n;++i) {
        if(r[i]==1)d--;
        else d++;
        if(!dr.count(d))dr[d]=i+1;
    }
    // diff, diffr, for every l, get cd, check init-cd in map;
    int ans=1e6, cd=0;
    dr[0] = 0;
    for(int i=n-1;i>=0;--i){
        if(l[i]==1) cd--;
        else cd++;
        if(dr.count(id-cd)) ans = min( ans, dr[id-cd]+n-i ); 
    }
    if(dr.count(id)) ans = min(ans, dr[id]);
    cout << ans << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}