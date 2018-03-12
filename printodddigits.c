#include<stdio.h>
#include<string.h>
void main()
{
char s[40],i,l;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if((s[i]%2)!=0)
printf("\n%c",s[i]);
}}
