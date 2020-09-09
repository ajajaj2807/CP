#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
        int a, b, c;
        cin >> a >> b;
        c = max(a,b);
        if(c==1) cout << "1/1";
        if(c==2) cout << "5/6";
        if(c==3) cout << "2/3";
        if(c==4) cout << "1/2";
        if(c==5) cout << "1/3";
        if(c==6) cout << "1/6";
        return 0;
}