#include<stdio.h>
int main()
{
int s,a,b;
scanf("%d",&s);
if(s!=0)
if(s<60)
printf("0:%d",s);
else
{
a=s/60;
b=s%10;
printf("%d:%d",a,b);
}
return 0;
}
