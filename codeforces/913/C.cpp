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
vector<ll> c(32,-1);


int main() {
    ll n, l;
    cin >> n >> l;
    for( int i=0;i<n;++i){
        cin >> c[i];
    }
    for(int i=1;i<32;++i){
        if(c[i]==-1 || c[i-1]*2<c[i])
            c[i] = c[i-1]*2;
    }
    ll ans=0;
    for(int i=0;i<c.size();++i){
        if(ans>c[i]){
            ans = c[i];
        }
        if( l&(1<<i)){
            ans += c[i];
        }
    }
    cout << ans;
    return 0;
}