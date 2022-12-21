#include<stdio.h>
int main()
{
    int a=-1,b=1,c,i,n;
    printf("enter the nth term of fibonnaci series you want");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
}
printf(" nth term of fibonnaci series is %d",c);
}
