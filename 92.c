#include<stdio.h>
int main()
{
int a[20],N,i,sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
for(i=0;i<N;i++)
{
sum=sum+a[i];
}
printf("sum=%d",sum);
return 0;
}

