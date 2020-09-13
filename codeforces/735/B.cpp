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
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    ll arr[n];
    f(i, n) cin >> arr[i];
    sort(arr, arr+n, greater<int> ());
    ll b=0,c=0;
    if(n1>n2){
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    f(i, n){
        if(i<n1){
            b+=arr[i];
        }
        else if(i<n2+n1){
            c += arr[i];
        }else break;
    }

    cout << setprecision(8) << fixed;
    cout << double((double)b/(double)n1 + (double)c/(double)n2);
}