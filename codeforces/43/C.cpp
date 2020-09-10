#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[3] = {0};
    cin >> n;
    for(int i=0, x;i<n;++i){
        cin >> x;
        a[x%3]++;
    }
    int ans;
    ans = a[0]/2 + min(a[1], a[2]);
    cout << ans;
}