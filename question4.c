#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the two no for hcf");
scanf("%d%d",&a,&b);
for(i=a>b?b:a;i>=1;i--)
{
if(a%i==0&&b%i==0)
break;
}
printf("hcf is %d",i);
}
