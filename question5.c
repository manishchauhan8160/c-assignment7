#include<stdio.h>
int main()
{
int a,b,x,i;
printf("enter two number");
scanf("%d%d",&a,&b);
x=a>b?a:b;
for(i=x;i>1;i--)
{
if(a%i==0&&b%i==0)
break;
}
if(i==1)
printf("the no are co-prime");
else
printf("the no are not co-prime");
}
