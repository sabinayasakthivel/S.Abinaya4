#include<stdio.h>
int main()
{
int l,b,h,a,c;
scanf("%d%d%d",&l,&b,&h);
a=2*(l*b+b*h+h*l);
c=l*b*h;
printf("total surface area=%d",a);
printf("volume=%d",c);
return 0;}
