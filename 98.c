#include<stdio.h>
int main()
{
int a[20],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
} 
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
break;
}
printf("%d",i+1);
return 0;
}
