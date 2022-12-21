#include<stdio.h>
int main()
{
int a=-1,b=1,c,i,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n+1;i++)
{
c=a+b;
if(c==n)
break;
a=b;
b=c;
}
if(i>n+1)
printf("element not found");
else
printf("element found");
}
