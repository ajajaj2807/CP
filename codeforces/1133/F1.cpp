#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mset(arr, val) memset(arr, val, sizeof(arr))

const int MOD = 1e9+7;
const int mxN = 2e5;
vector<int> adj[mxN];
int deg[mxN] = {0};
vector<pair<int, int>> ans;

void bfs(int u){
    bool vis[mxN] = {0};
    vis[u] = 1;
    queue<int> q;
    q.push(u);

    while(!q.empty()){
        int idx = q.front();
        q.pop();
        for(auto v: adj[idx]){
            if(vis[v])continue;
            ans.push_back(mp(v, idx));
            vis[v] = 1;
            q.push(v);
        }
    }
}

int main () {
    int n, m;
    cin >> n >> m;
    int maxDeg=0;
    for(int i=0, a, b;i<m;++i){
        cin >> a >> b;
        a--, b--;
        adj[a].pb(b);
        adj[b].pb(a);
        deg[a]++;
        deg[b]++;
        if(deg[a]>deg[maxDeg]) maxDeg = a;
        else if(deg[b] > deg[maxDeg]) maxDeg = b;
    }

    bfs(maxDeg);

    for(auto a:ans){
        cout << a.ff+1 << " " << a.ss+1 << "\n";
    }
}