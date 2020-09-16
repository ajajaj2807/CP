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
const int mxN = 100;
int par[mxN];

// DSU ( array p needed)
// use _union() to join
int _find(int u){
    if (par[u]==-1)return u;
    return _find(par[u]);
}
bool _union(int u, int v){
    int pu = _find(u);
    int pv = _find(v);
    if(pu==pv) return false;
    par[pu] = pv;
    return true;
}

int main() {
    int n;
    cin >> n;
    int p[n], f[n];
    f(i,n) cin >> p[i];
    f(i, n) cin >> f[i];
    fill_n(par, mxN, -1);
    f(i, n){
        int v = f[i];
        if(i+v<n) _union(i, i+v);
        if(i-v>=0) _union(i, i-v);
    }
    for(int i=0;i<n;++i){
        int u = p[i]-1;
        if(_union(i, u))
        {cout << "NO";return 0;}
    }
    cout << "YES";

}