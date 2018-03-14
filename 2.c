#include<stdio.h>
void main()
{
char a[30];
int n,l,s=0;
gets(a);
l=strlen(a);
scanf("%d",n);
while(a!=0)
{
s=s*10;
s=a%10+s;
a=a/10;
}
for(i=m;i<l;i++)
printf("%d",a[i]);
}
