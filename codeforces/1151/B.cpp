#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
const int mxN = 2e5;

int main()
{
    int n,m;
    cin >> n >> m;
    int mat[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> mat[i][j];
        }
    }
    int xr = 0;
    for(int i=0;i<n;++i){
        xr = xr^mat[i][0];
    }
    if(xr){
        cout << "TAK\n";
        for( int i=0;i<n;++i){
            cout << 1 << " ";
        }
        return 0;
    }
    int di=-1, dj=-1;
    for( int i=0;i<n;++i){
        for(int j=1;j<m;j++){
            if(mat[i][j] != mat[i][0]){
                di=i, dj=j;       
                break;
            }
        }
    }
    if(di==-1&&dj==-1){
        cout << "NIE";
    } else{
        cout << "TAK\n";
        for(int i=0;i<n;++i){
            if(i==di) cout << dj+1 << " ";
            else cout << 1 << " ";
        }
    }

}