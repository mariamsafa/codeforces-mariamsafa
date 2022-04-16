#include<stdio.h>
int main()
{
   int i,n,x=0;
   char ch[5];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s", ch);
       if(ch[0]=='+'&&ch[1]=='+')
       {
           x++;

       }
       else if(ch[1]=='+'&&ch[2]=='+')
       {
           x++;

       }
       else if(ch[0]=='-'&&ch[1]=='-')
       {
           x--;


       }
       else if (ch[1]=='-'&&ch[2]=='-')
       {
           x--;
       }
   }
    printf("%d\n",x);
    return 0;
}



