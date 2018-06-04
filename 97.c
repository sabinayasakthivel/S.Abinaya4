#include<stdio.h>
int main()
{
int d,s=0,a;
scanf("%d",&a);
while(a!=0)
{
d=a%10;s=s*10+d;
a=a/10;
}
printf("%d",s);
return 0;
}
