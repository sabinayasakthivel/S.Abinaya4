#include<stdio.h>
void main()
{
int i,count=0,a,b;
scanf("%d",&a);
for(i=1;i<a;i++)
{
b=pow(2,i);
if(b==a)
count++;
}
{
if(count==1)
printf("yes");
else
printf("no");
}
}
