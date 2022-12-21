#include<stdio.h>
int main()
{
int a=-1,b=1,c,n,i;
printf("enter the no of terms you want to print");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
}
