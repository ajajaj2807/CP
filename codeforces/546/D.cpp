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
const int mxN = 5e6;
ll dv[mxN+1] = {0};
int ps[mxN+1] = {0};
void createSieve(int n){
    ps[0] = 0;
    ps[1] = 0;
    for(int i = 2;i<=n;++i){
        if(ps[i]||(ll)i*i>n)continue;
        for(int j=i*i;j<=n;j+=i){
            ps[j] = i;
        }
    }
}

void createDivs(int n){
    for(int i=2;i<=n;++i){
        if(ps[i])
            dv[i] = dv[i/ps[i]]+1;
        else
            dv[i] = 1;
    }
    for(int i=1;i<=n;++i) dv[i] += dv[i-1];
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << dv[a]-dv[b] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    createSieve(mxN);
    createDivs(mxN);
    while(tt--) solve();
}