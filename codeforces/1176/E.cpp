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

// Simple BFS
// Fills d[] with min distance from 'u'
void bfs(int u, vi *adj, int *d){
    queue<int> q;
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

void solve() {
    int n, m;
    cin >> n >> m;
    vi adj[n];
    vi ans;
    f(i, m){
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(n==1){
        cout << 1 << "\n";
        cout << 1 << "\n";
        return;
    }
    int d[n] = {0};
    fill_n(d, n, 1e8);
    bfs(0, adj, d);
    vi od, ev;
    f(i, n){
        if(d[i]&1)od.pb(i);
        else ev.pb(i);
    }
    if(od.size() < ev.size()){
        cout << od.size() << "\n";
        for(auto a:od) cout << a+1 << " ";
    } else{
        cout << ev.size() << "\n";
        for(auto a: ev) cout << a+1 << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}