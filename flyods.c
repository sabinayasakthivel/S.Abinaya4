#include<stdio.h>
#include<string.h>
int main()
{
int i ,j,n,number=1;

scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf(" %d", number);
number++;
}
printf("\n");
}
return 0;
    
}
