#include <stdio.h>
 
int main(void) {
	int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a*b;
if((c%2)==0)
printf("product of two number is even:%d",c);
else
printf("product of two number is odd:%d",c);
return 0;
}
