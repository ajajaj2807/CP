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
const int mxN = 1e5;

vector<pair<ll, bool>> edges[mxN];
set<int> ans;

bool dfs(int u, int p ,int pprob){
    bool stp = false;
    for(auto adjv: edges[u]){
        ll v = adjv.ff;
        if(v==p)continue;
        bool br = adjv.ss;
        bool child_prob = dfs(v, u, br);
        if(br||child_prob) stp=true;
    }
    if(pprob&&!stp) ans.insert(u);
    return stp;
}


int main() {
    int n;
    cin >> n;
    for(int i=0, a, b, c;i<n-1;++i){
        cin >> a >> b >> c;
        a--, b--, c--;
        edges[a].pb(mp(b, c));
        edges[b].pb(mp(a, c));
    }
    dfs(0, -1, 0);
    cout << ans.size() << endl;
    for(auto a:ans){
        cout << a+1 << " ";
    }

}
