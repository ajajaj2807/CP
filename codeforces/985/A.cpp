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
    int arr[n/2+1];
    f(i, n/2)cin >> arr[i+1];
    int ae = 0, ao=0;
    sort(arr+1, arr+n/2+1);
    f(i, n/2){
        ae += abs(arr[i+1]-2*(i+1));
    }
    f(i, n/2){
        ao += abs( arr[i+1] - 2*(i+1)+1 );
    }
    cout << min(ao, ae);
}