#include<stdio.h>
int main()
{
    int i,n,k,m[50];
    int count=0;
    scanf("%d%d",&n,&k);
    for(i=0; i<n;i++)
    {
        scanf("%d",&m[i]);

    }
    for(i=0;i<n;i++)
    {
         if(m[i]>=m[k-1]&&m[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;

}
