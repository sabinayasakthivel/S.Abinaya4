#include<stdio.h>
#include<math.h>
int main()
{
int n,i,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=pow(2,i);
if(n<c)
{
printf("%d",c);
break;
}
}
return 0;
}
