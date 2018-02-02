#include<stdio.h>
void main()
{
int a[30],i,n,count;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>=0&&a[i]<=9)
count++;
}
if(count==n)
printf("the given string is numeric");
else
printf("the given string is not numeric");
}
