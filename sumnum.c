#include <stdio.h>
 
int main()
{
    int a,i,count=0;

    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    count=i+count;
    printf("sum of natural numbers are:%d",count);
    return 0;
}
