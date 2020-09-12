#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define f(i, n) for(int (i)=0, (i)<(n);(i)++)

const int MOD = 1e9+7;
const int mxN = 1e5;
const int mxM = 1e5;
const int mxK = 1e5;


int main() {
    int n, m;
    cin >> n >> m;
    int mat[n][m] = {0};
    for( int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin >> mat[i][j];
    int q;
    cin >> q;
    int fill[n][m] = {0};
    int mx[n];
    for(int i=0;i<m;++i){
        fill[n-1][i] = 1;
    }
    mx[n-1] = 1;
    for(int i=n-2;i>=0;--i){
        mx[i] = 0;
        for(int j=0;j<m;++j){
            fill[i][j] = 1;
            if(mat[i][j]<=mat[i+1][j]){
                fill[i][j] = fill[i+1][j]+1;
            }
            mx[i] = max(mx[i], fill[i][j]);
        }
    } 

    while(q--){
        int l, r;
        cin >> l >> r;
        if(mx[l-1]>=(r-l+1)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }

}
