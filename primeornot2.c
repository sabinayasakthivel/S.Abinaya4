#include <stdio.h>

int main() {
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{if((n%i)==0)
count++;
}
if(count==0)
printf("yes,it is prime number");
else
printf("no,it is not a prime number");
return 0;
}
