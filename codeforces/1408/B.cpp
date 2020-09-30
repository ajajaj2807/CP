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

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int isz=0;
    set<int> ars;
    f(i, n) {cin >> arr[i];ars.insert(arr[i]);if(arr[i])isz=1;}
    if(isz==0) {cout << 0 << "\n";return;}
    if(k>=ars.size()){
        cout << 1 << "\n";
        return;
    }
    if(k==1){
        if(ars.size()>1) {cout << -1 << "\n";
        return;}
    }
    int ans = ceil((float)(ars.size()-k)/(float)(k-1)) + 1;
    cout << ans << "\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

