#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,l,c=1;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='.')
c++;
}
printf("number of lines are:%d",c);
return 0;
}

