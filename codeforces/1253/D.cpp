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

const int MOD = 1e9+7;
const int mxN = 2e5;
vi adj[mxN];
int vis[mxN] = {0};
int cp=1;
int mx = 0;

void dfs(int u){
    vis[u] = cp;
    mx = max(mx, u);
    for(auto v: adj[u]){
        if(vis[v]==0)
            dfs(v);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    f(i, m){
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int ans=0;
    f(i, n){
        if(vis[i]==0) {
            if(i<mx) ans++;
            dfs(i);
            cp++;
        }
    }
    cout << ans;
}