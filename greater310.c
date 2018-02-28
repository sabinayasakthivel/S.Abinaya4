#include<stdio.h>
void main()
{ 
int n,i,a;
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=10*i; 
if(n<a)
{
printf("%d",a);
  break;
}}
}
