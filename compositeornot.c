#include <stdio.h>

int main() 
{
int n,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{if((n%i)==0)
count++;
}
if(count==0)
printf("no it is not a composite number");
else
printf("yes it is a composite number");
return 0;
}
