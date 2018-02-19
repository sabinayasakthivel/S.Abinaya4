#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int i,n,m,c=0;
gets(a);
gets(b);
n=strlen(a);
m=strlen(b);
if(n>=m)
{
n=n;
puts(a);
}
else
{
n=m;
puts(b);
}
for(i=0;i<n;i++)
if(a[i]==b[i])
c++;
if(c==n)
printf("same");
else
printf("not same");
}
