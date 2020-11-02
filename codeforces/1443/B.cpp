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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    int dp[n] = {0};
    dp[0] = ((s[0]=='1')?a:0);
    for(int i = 1;i<n;++i){
        if(s[i]=='0'){
            dp[i] = dp[i-1];
        }
        else{
            // dbg(s[i-1]);
            if(s[i-1]=='1'){
                dp[i] = dp[i-1];
            }
            else{
                int cnt = 0, ii=i-1;
                while(ii>=0){
                    if(s[ii]=='1') break;
                    cnt++;
                    ii--;
                }
                // dbg(ii);
                if(ii==-1){
                    dp[i] = a;
                    continue;
                }
                dp[i] = min(cnt*b + dp[ii], dp[ii] + a);
            }
        }
        // dbg(dp[i]);
    }
    cout << dp[n-1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}