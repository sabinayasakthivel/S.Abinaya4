#include<stdio.h>
void main()
{int a,b;
printf("enter the numbers");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping a&b values are%d %d",a,b);
}
