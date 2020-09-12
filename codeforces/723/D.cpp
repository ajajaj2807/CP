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
const int mxN = 50;
char grid[mxN][mxN];
pii p[mxN][mxN];
bool vis[mxN][mxN];

bool e(int i, int j, int n, int m){
    return i>=0&&j>=0&&i<n&&j<m&&grid[i][j]=='.'&&!vis[i][j];
}

bool e2(int i, int j, int n, int m){
    return i>=0&&j>=0&&i<n&&j<m&&grid[i][j]=='.';
}

bool isBorder(int i, int j, int n, int m){
    return i==0||j==0||i==n-1||j==m-1;
}

void clearArea(int i, int j, int n, int m){
    if(grid[i][j]=='*') return;
    grid[i][j] = '*';
    if(e2(i+1, j, n, m)){
        clearArea(i+1, j, n, m);
    }
    if(e2(i-1, j, n, m)){
        clearArea(i-1, j, n, m);
    }
    if(e2(i, j+1, n, m)){
        clearArea(i, j+1, n, m);
    }
    if(e2(i, j-1, n, m)){
        clearArea(i, j-1, n, m);
    }
    
}


void clearArea2(int i, int j, int n, int m){
    if(grid[i][j]=='-'||grid[i][j]=='*') return;
    grid[i][j] = '-';
    if(e2(i+1, j, n, m)){
        clearArea2(i+1, j, n, m);
    }
    if(e2(i-1, j, n, m)){
        clearArea2(i-1, j, n, m);
    }
    if(e2(i, j+1, n, m)){
        clearArea2(i, j+1, n, m);
    }
    if(e2(i, j-1, n, m)){
        clearArea2(i, j-1, n, m);
    }
    
}

int dfs(int i, int j,int n, int m){
    int cs = 0, ans=1;
    vis[i][j] = 1;
    if(isBorder(i, j, n, m)){
        return -1;
    }
    if(e(i+1, j, n, m)){
        cs = dfs(i+1, j, n, m);
        if(cs==-1) return -1;
        else ans += cs;
    }
    if(e(i-1, j, n, m)){
        cs = dfs(i-1, j, n, m);
        if(cs==-1)return -1;
        else ans+=cs;
    }
    if(e(i, j+1, n, m)){
        cs = dfs(i, j+1, n, m);
        if(cs==-1)return -1;
        else ans+=cs;
    }
    if(e(i, j-1, n, m)){
        cs = dfs(i, j-1, n, m);
        if(cs==-1)return -1;
        else ans+=cs;
    }
    return ans;
}

int main() {
    int n,m, k;
    cin >> n >> m >> k;
    f(i, n) f(j,m) cin >> grid[i][j];

    f(i, n){
        if(grid[i][0]=='.') clearArea2(i, 0, n, m);
        if(grid[i][m-1]=='.') clearArea2(i, m-1, n, m);
    }
    f(i, m){
        if(grid[0][i]=='.') clearArea2(0,i, n, m);
        if(grid[n-1][i]=='.') clearArea2(n-1, i, n ,m);
    }

    // find all the lakes, store (size,pos)
    vector<pair<int, pii>> ls;
    f(i, n){
        f(j,m){
            if(!vis[i][j]&&grid[i][j]=='.'){
                int lsize = dfs(i, j, n, m);
                if(lsize==-1) continue;
                ls.push_back(mp(lsize,mp(i, j)));
                // cout << "Lake found: " << lsize << "(" << i << "," << j << ")\n";
            }
        }
    }
    // sort size
    sort(ls.begin(), ls.end());

    int ans=0;
    // cout << "size of lakes found is " << ls.size() << endl;
    // for(auto a:ls){
        while( ls.size()!=k){
            auto ait= ls.begin();
            auto a = *ait;
            // cout << a.ff << ":" << a.ss.ff << "," << a.ss.ss << "\n";
            clearArea(a.ss.ff, a.ss.ss, n, m);
            ans+= a.ff;
            ls.erase(ait);
        }
    // }
    cout << ans << "\n";
    f(i, n){
        f(j,m) {
            if(grid[i][j]=='-') cout << '.'; else cout << grid[i][j];}
        cout << "\n";
    }
}