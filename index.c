#include<stdio.h>
void main()
{
int a[20],i,n;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\n%d %d",a[i],i);
}
}

