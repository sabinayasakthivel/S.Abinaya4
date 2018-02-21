#include <stdio.h>

int main(void)
{
int c,d;
printf("enter the numbers");
scanf("%d%d",&c,&d);
c=c+d;
d=c-d;
c=c-d;
printf("after swapping a&b values are%d,%d",c,d);


	return 0;
}
