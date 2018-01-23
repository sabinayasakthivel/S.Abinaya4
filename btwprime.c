#include <stdio.h>

int main(void) 
{
int s, t,i,j,count=0;
printf("enter the first number:");
scanf("%d",&s);
printf("enter the second number:");
scanf("%d",&t);
for(i=s;i<=t;i++)
{
for(j=2;j<i;j++)
{if((i%j)==0)
break;
}
	
}
if(i==j)
printf("%dis a prime number");
return 0;

}
