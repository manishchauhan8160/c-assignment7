#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the number");
scanf("%d",&a);
for(i=a+1;i<=a+10;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
}
if(j==i)
{
printf("%d",i);
break;
}
}
}
