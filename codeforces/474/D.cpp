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

const int MOD = 1e9+7;
const int mxN = 1e5+1;

int main() {
    int tt, k;
    cin >> tt >> k;
    ll dp[mxN];
    ll ans[mxN];
    dp[0] = 1;
    ans[0] = 1;
    for(int i=1;i<mxN;++i){
        if(i-k<0){
            dp[i] = 1;
            ans[i] = ans[i-1]+dp[i];
            continue;
        }
        dp[i] = (dp[i-1]+dp[i-k])%MOD;
        ans[i] = (ans[i-1]+dp[i])%MOD;
    }
    while(tt--){
        int a,b;
        cin >> a >> b;
        ll an = (ans[b]-ans[a-1]);
        if(an<0) an = MOD+an; 
        cout << an << "\n";
    }
}