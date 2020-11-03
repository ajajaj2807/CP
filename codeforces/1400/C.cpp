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
    int x;
    cin >> s >> x;
    int n = s.size();
    string ans;
    f(i, n) ans+='1';
    f(i, n){
        if(s[i]=='0'){
            if(i-x>=0) ans[i-x] = '0';
            if(i+x<n) ans[i+x] = '0';
        }
    }
    f(i, n){
        if(s[i]=='1'){
            if(i-x>=0) if(ans[i-x] == '1') continue;
            if(i+x<n) if(ans[i+x] == '1')continue;
            cout << "-1\n";
            return;
        }
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