#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    i=m*n;
    if(i%2==0)
    {
        printf("%d",i/2);
    }
    else{
        printf("%d",(i-1)/2);
    }
    return 0;
}

