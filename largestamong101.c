#include<stdio.h>
int main()
{
int a[30],n,i,max;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i])
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max);
{
max=a[i];
}}
printf("%d is the maximum number:",max);
return 0;
}
