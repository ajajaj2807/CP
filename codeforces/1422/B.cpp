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
#define int ll

const int MOD = 1e9+7;
const int mxN = 1e5;

int minCost(int A[], int n) 
{ 
    int cost = 0; 
    sort(A, A + n); 
    int K = A[n / 2];   
    for (int i = 0; i < n; ++i) 
        cost += abs(A[i] - K); 
    if (n % 2 == 0) { 
        int tempCost = 0; 
        K = A[(n / 2) - 1]; 
        for (int i = 0; i < n; ++i) 
            tempCost += abs(A[i] - K); 
        cost = min(cost, tempCost); 
    } 
    return cost; 
} 

void solve() {
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    f(i, n) f(j, m) cin >> mat[i][j];
    int ans=0;
    f(i, n/2+n%2) f(j, m/2+m%2){
        int arr[4];
        arr[0] = mat[i][j];
        arr[1] = mat[i][m-j-1];
        arr[2] = mat[n-i-1][j];
        arr[3] = mat[n-i-1][m-j-1];
        ll ta = minCost(arr, 4);
        // dbg(ta);
        if((i==(n-i-1))||(j==(m-1-j))) ta/=2;
        ans+=ta;
    }
    cout << ans << "\n";
}

int32_t main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}