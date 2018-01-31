#include<stdio.h>

void main()
{
int n,f=0,s=1,N,i;
printf("enter the number");
printf("%d%d",f,s);
scanf("%d",&n);

for(i=2;i<=n;i++)
{
N=f+s;
f=s;
s=N;

printf("%d",N);
}
}
