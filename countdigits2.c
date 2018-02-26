#include<stdio.h>
int main()
{
int n,count=0,d;
scanf("%d",&n);
while(n!=0)
{
d=n/10;
count++;
n=n/10;
}
printf("number of digits are:%d",count);
return 0;
}
