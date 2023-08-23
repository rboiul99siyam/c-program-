#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int t;
        scanf("%d", &t);
        int a[t];
        for(int j=0;j<t;j++)
        {
            scanf("%d", &a[j]);
        }
        int s;
        scanf("%d", &s);
        int count=0;
        for(int j=0;j<t;j++)
        {
            if(a[j]==s)
            {
                for(int k=0;k<t;k++)
                {
                    if(a[k]<s||a[k]>s)
                    {
                        count++;
                    }
                    if(a[k]==s)
                    {
                        count+=1;
                        break;
                    }
                }
                break;
            }
        }
        if(count!=0)
        {
            printf("Case %d: %d\n", i, count);
        }
        else
        {
            printf("Case %d: Not Found\n", i, count);
        }
    }
}