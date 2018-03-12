#include<stdio.h>
void main()
{
int a,b,i,c,k=0,d;
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<c;i++)
{
d=i*i;
if(c==d)
  k++;
}
  if(k==1)
printf("yes");
else
printf("no");
}
