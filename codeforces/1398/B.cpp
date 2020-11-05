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
    string s;
    cin >> s;
    vi a;
    int cnt=s[0]=='1'?1:0;
    for(int i=1;i<s.size();++i){
        if(s[i]=='1'){
            cnt++;
        }
        else {
            if(cnt)a.pb(cnt);
            cnt = 0;
        }
    }
    if(cnt)a.pb(cnt);
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    f(i, a.size()) ans+=a[i++];
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}