#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    array<int,2> arr[n];
    for(int i=0, a, b;i<n;++i){
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    sort(arr, arr+n);
    int prev=0;
    for(int i=0;i<n;++i){
        int mx, mi;
        if(arr[i][0]>arr[i][1]){
            mx = arr[i][0];
            mi = arr[i][1];
        }else{
            mx = arr[i][0];
            mi = arr[i][1];
        }

        if (prev<=mi){
            prev = mi;
        }
        else{
            prev = mx;
        }
    }
    cout << prev;
}