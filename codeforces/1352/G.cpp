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
    cin >> n;
    if(n<4) {cout << -1 << "\n";return;}
    int i = 1;
    int ans[n+1] = {0};
    while(i+3<=n){
        ans[i] = i+1;
        ans[i+1] = i+3;
        ans[i+2] = i;
        ans[i+3] = i+2;
        i+=4;
    }
    if(n%4==1){
        ans[n] = n;
    }
    if(n%4==2){
        ans[n] = n;
        ans[n-1] = ans[n-2];
        ans[n-2] = n-1;
    }
    if(n%4==3){
        ans[n] = n-1;
        ans[n-1] = ans[n-3];
        ans[n-2] = n;
        ans[n-3] = n-2;
    }
    f(i, n){
        cout << ans[i+1] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 2 4 1 3   6 8 5 9  11 7 10