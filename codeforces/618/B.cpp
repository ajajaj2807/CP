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
    int n;
    cin >> n;
    int g[n][n], ans[n];
    int mx[n] = {0};
    int recN = 0;
    f(i,n) { 
        f(j,n) {
        cin >> g[i][j];
        if(g[i][j] > mx[i]){
            mx[i] = g[i][j];
        }        
    }
    if(mx[i]==n-1&&recN){
        mx[i] = n;
    }
    if(mx[i]==n-1&&!recN){
        recN = 1;
    }
    }
    f(i, n){
        cout << mx[i] << " ";
    }
    
}