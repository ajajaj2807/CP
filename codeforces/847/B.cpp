#include<bits/stdc++.h>
using namespace std;
#define maxn 234567
int n,a,ok[maxn],cnt,id;
vector<int>ans[maxn];
int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(i==1)
        {
            ans[cnt].push_back(a);
            ok[cnt]=a;
        }
        else
        {
            if(a<=ok[cnt])
            {
                cnt++;
                id=cnt;
            }
            else
            {
                int l=0,r=cnt;
                while(l<r)
                {
                    int mid=(l+r)/2;
                    if(ok[mid]>=a)l=mid+1;
                    else r=mid;
                }
                id=r;
            }
            ans[id].push_back(a);
            ok[id]=a;
        }
    }
    for(int i=0; i<=cnt; i++)
    {
        int len=ans[i].size();
        for(int j=0; j<len; j++)
        {
            printf("%d",ans[i][j]);
            if(j==len-1)printf("\n");
            else printf(" ");
        }
    }
    return 0;
}