#include<stdio.h>
int main()
{
int a,count=0,sum=0,z=1,x,i,j,k;
printf("enter the number");
scanf("%d",&a);
j=a;
k=a;
while(a)
{
a=a/10;
count++;
}
while(j)
{
x=j%10;
z=1;
for(i=1;i<=count;i++)
{
z=z*x;
}
sum=sum+z;
j=j/10;
}
if(sum==k)
printf("armstrong number");
else
printf("not an armstrong number");
}
