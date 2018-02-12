#include<stdio.h>
#include<string.h>
int main()
{
char s[80];
int i,l;
gets(s);
l=strlen(s);
f0r(i=0;i<=l;i++)
printf("%c",s[i]);
return 0;
}
