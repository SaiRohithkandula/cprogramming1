#include<stdio.h>
int main()
{
    int i,a[100],b[100],n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[0]=1;
        if(a[i]<a[i+1])
        {
            b[i+1]=b[i]+1;
        }
        else
        {
            b[i+1]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        s=s+b[i];
    }
    printf("%d\n",s);
    return 0;
}

