#include<stdio.h>
int main()
{
int a[50],b[20],n,i,k=0,t,j;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]%2)!=0)
printf("\n%d%d",i,a[i]);
b[i]=a[i];
printf("\n%d",b[i]);
}
return 0;
}
