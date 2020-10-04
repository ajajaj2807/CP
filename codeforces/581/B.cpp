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
    int n;
    cin >> n;
    int arr[n];
    f(i, n) cin >> arr[i];
    int lux[n];
    int mx = arr[n-1];
    for(int i=n-1;i>=0;--i){
        if(arr[i]>mx){mx=arr[i];lux[i] = 0;continue;}
        lux[i] = mx-arr[i]+1;
    }
    lux[n-1] = 0;
    f(i, n) cout << lux[i] << " ";
}