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

int main() {
    int n, m;
    cin >> n >> m;
    vi sp[m+1];
    f(i, n){
        int x, y;
        cin >> x >> y;
        sp[x].pb(y);
    }
    for(int i=1;i<=m;++i){
        sort(sp[i].begin(), sp[i].end(), greater<int>());
    }
    vector<int> mx(n+1, 0);
    for(int j=0;j<m+1;j++){
        int cs=0;
        for(int i=0;i<sp[j].size();++i){
            cs += sp[j][i];
            if(cs<0) break;
            mx[i] += cs;
        }
    }
    cout << *max_element(mx.begin(), mx.end());
}
