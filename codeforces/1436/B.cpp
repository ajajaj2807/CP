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

int ps[mxN+1] = {0};
void createSieve(int n){
    ps[0] = 1;
    ps[1] = 1;
    for(int i = 2;i<=n;++i){
        if(ps[i]||(ll)i*i>n)continue;
        for(int j=i*i;j<=n;j+=i){
            ps[j] = i;
        }
    }
}

// don't forget overflow
void solve() {
    int n;
    cin >> n;
    createSieve(mxN);
    // dbg(ps[n]);
    if(ps[n]==0){
        f(i, n){
            f(j, n) cout << "1 ";
            cout << "\n";
        }
        // cout << "\n";
        return;
    }
    int le = 0;
    f(i, mxN){
        if(ps[i+2]!=0&&ps[n-1+i+2]==0) {le = i+2;break;}
    }
    f(i, n-1){
        f(j, n-1){
            cout << "1 ";
        }
        cout << le << "\n";
    }
    ll sum= 0;
    f(j, n-1){
        cout << le << " ";
        sum+=le;
    }
    le = 0;
    f(i, mxN){
        if(ps[i+2]!=0&&ps[sum+i+2]==0) {le = i+2;break;}
    }
    cout << le << "\n";

    // dbg(le);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}