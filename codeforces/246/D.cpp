#include<bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

const int mxN=1e5+1;
int n, c[mxN], m;
set<int> adj[mxN];

int main() {
    int mxColor=0, minColor=1e5;
    cin >> n >> m;
    for(int i=0;i<n;++i){
        cin >> c[i];
        mxColor = max(mxColor, c[i]);
        minColor = min(minColor, c[i]);
    }
    for(int i=0, a, b;i<m;++i){
        cin >> a >> b, a--, b--;
        if(c[a]^c[b]){
            adj[c[a]].insert(c[b]);
            adj[c[b]].insert(c[a]);
        }
    }
    int ans = 0, fans=1e5;
    for(int i=minColor;i<=mxColor;++i){
        if((int)adj[i].size()==ans){
            fans = min(fans, i);
            continue;
        }
        if((int)adj[i].size()>ans){
            ans = (int)adj[i].size();
            fans = i;
        }
    }
    if(fans==0){
        cout << minColor;
        return 0;
    }
    cout << fans;
}