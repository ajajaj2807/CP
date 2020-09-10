// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n, ax, ay, bx, by, cx, cy;
    cin>>n;
    cin>>bx>>by>>ax>>ay>>cx>>cy;

    if(cx>=bx-1&&cx<=bx+1&&cy>=by-1&&cy<=by+1){
        cout << "NO";
        return 0;
    }

    if(ax<bx&&cx<bx){
        if(ay<by&&cy<by){
            cout << "YES";
            return 0;
        }
        if(ay>by&&cy>by){
            cout << "YES";
            return 0;
        }
    }else if(ax>bx&&cx>bx)
    {
        if(ay<by&&cy<by){
            cout << "YES";
            return 0;
        }
        if(ay>by&&cy>by){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

}