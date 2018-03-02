#include<stdio.h>
int main()
{
int n,l,r,i;
scanf("%d%d%d",&l,&n,&r);
for(i=l;i<n;i++)
{
if(r==i)
{
printf("yes");
break;
}
}return 0;
}
