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
const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int m = (int)sqrt(n);
    vi a(n+5);
    for(int i = 0, o = n;i<n;i+=m)
        for(int j = min(i+m-1, n-1);j>=i;j--)a[j] = o--;
    f(i, n) cout << a[i] << " ";

}
// 8 9 6 7 4 5 2 3 1
// 7 8 9 4 5 6 1 2 3
// 10 - 3;
// 