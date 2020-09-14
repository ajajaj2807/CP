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
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n%2!=k%2){
            cout << "NO\n";
            continue;
        }
        ll mi = k*k;
        if(mi>n){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }   
}