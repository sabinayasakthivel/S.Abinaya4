#include <stdio.h>

int main(void) {
	int a,b,i,rem;
	printf("enter the numbers");
	scanf("%d,%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	rem=i%2;
	if (rem==1)
	printf("%d is a odd number",i);
	}
	
	return 0;
}
