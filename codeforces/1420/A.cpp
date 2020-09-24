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

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int flag = 0;
    int mi = 0;
    f(i, n) {
        cin >> arr[i];
        if(mi==0){mi=arr[i];continue;}
        if(arr[i]>=mi)flag=1;
        else mi = arr[i];
    }
    cout << (flag?"YES":"NO") << "\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

