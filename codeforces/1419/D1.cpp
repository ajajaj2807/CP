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
const int mxN = 1e5;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    f(i, n) {int x;cin >> x; arr.pb(x);}
    sort(arr.begin(), arr.end());
    int ans[n];
    for(int i=1;i<n;i+=2){
        ans[i] = *arr.begin();
        arr.erase(arr.begin());
    }
    for(int i=0;i<n;i+=2){
        ans[i] = *arr.begin();
        arr.erase(arr.begin());
    }
    cout << n/2 -1+ n%2 << "\n";
    for(auto a: ans){
        cout << a << " ";
    }
}
