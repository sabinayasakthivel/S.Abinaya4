#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int k,i;
gets(a);
scanf("%d",&k);
for(i=0;i<k;i++)
printf("%c",a[i]);
return 0;
}
