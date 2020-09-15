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
const int mxN = 1e3;
vi adj[mxN];
ll ds[mxN], dt[mxN];

void bfs(int u, ll d[]){
    queue<int> q;
    fill_n(d, mxN, 1e5);
    d[u] = 0;
    bool vis[mxN] = {0};
    q.push(u);
    while(!q.empty()){
        int idx = q.front();
        q.pop();
        if (vis[idx])continue;
        vis[idx] = 1;
        for(auto v: adj[idx]){
            if(vis[v]) continue;
            d[v] = min(d[v], d[idx]+1);
            q.push(v);
        }
    }
}

int main() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    s--, t--;
    f(i, m){
        int x,y;
        cin >> x >> y, x--, y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    bfs(s, ds);
    bfs(t, dt);
    set<pii> ans;
    f(i, n) f(j, n){
        if(i==j) continue;
        bool hasEdge = 0;
        for(auto x:adj[i]){
            if(x==j) hasEdge=1;
        }
        if(hasEdge)continue;
        if( ds[i]+1+dt[j]>=ds[t]&&ds[j]+1+dt[i]>=ds[t]) ans.insert(mp(min(i, j), max(i, j)));
    }
    cout << ans.size();
}