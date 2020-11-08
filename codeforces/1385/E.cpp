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

int n;

// Top Sort (requires adj list as input)
// Kahn's Algorithm
vi top_sort(vi adj[]){
    vi res;
    vi indeg(n, 0);
    f(i, n) for(auto x:adj[i]) indeg[x]++;
    queue<int> q;
    f(i, n) if(!indeg[i]) q.push(i);
    int cnt = 0;
    while(!q.empty()){
        int u = q.front();q.pop();
        res.pb(u);
        for(auto v:adj[u]) if(--indeg[v]==0) q.push(v);
        cnt++;
    }
    vi empty(0);
    if(cnt^n) return empty; 
    return res;
}


// don't forget overflow
void solve() {
    int m;
    cin >> n >> m;
    vi dir[n];
    vector<pii> ed;
    f(i, m){
        int x, a, b;
        cin >> x;
        cin >> a >> b;
        if(x){
            dir[a-1].pb(b-1);
        }
        else{
            ed.pb({a-1, b-1});
        }
    }
    // dbg(ed.size());
    vi ts = top_sort(dir);
    if(ts.empty()){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    f(i, n){
        for(auto v: dir[i]) cout << i+1 << " " << v+1 << "\n";
    }
    vi order(n);
    f(i, n){
        order[ts[i]] = i;
    }
    f(i, ed.size()){
        if(order[ed[i].ff]>order[ed[i].ss]) swap(ed[i].ff, ed[i].ss);
        cout << ed[i].ff+1 << " " << ed[i].ss+1 << "\n";
    }

}

// 4 5 1 3 2
// 3 5 4 1 2

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}