#include<stdio.h>
int main()
{
int a[50],b[20],n,i,k,t,j;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]%2)!=0)
b[i]=a[i];
}
for(i=0;i<=k;i++)
{
    {
    a[i]=t;
    a[j]=a[i];
    t=a[j];
    }
    
if(i==k)
    
printf("%d",b[i]);
}
return 0;
}
