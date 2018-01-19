#include <stdio.h>

int main(void) {
	int i,f=1,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{f=f*i;
	}
	printf("factorial value is %d",f);
	return 0;
}
