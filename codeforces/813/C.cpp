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
const int mxN = 2e5;
vi adj[mxN];
int dr[mxN];
int dx[mxN];


// Simple BFS
// Fills d[] with min distance from 'u'
void bfs(int u, int d[], int n){
    queue<int> q;
    fill_n(d, mxN, -1);
    d[u] = 0;
    q.push(u);
    while(!q.empty()){
        int idx = q.front();
        // dbg(idx);
        q.pop();
        for(auto v: adj[idx]){
            if(d[v]!=-1) continue;
            d[v] = d[idx]+1;
            q.push(v);
        }
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    x--;
    f(i, n-1){
        // dbg(i);
        int u,v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(0, dr, n);
    bfs(x, dx, n);
    int ans =0;
    f(i, n)   if(dx[i]<dr[i]) ans=max(dr[i], ans);
    cout << 2*ans;
}
