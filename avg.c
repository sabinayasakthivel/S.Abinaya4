#include <stdio.h>

int main(void) {
	int a[20],i,n,sum=0,avg;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
	{
	sum=sum+a[i];
	}
	printf("sum is %d:",sum);
	avg=sum/2;
	printf("%d is an average value",avg);
	return 0;
}
