#include<stdio.h>
int main()
{
int a,b,i,j;
printf("enter the two number");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
}
if(j==i)
printf("%d\n",i);
}
}
