#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int l,b,i;
gets(s);
l=strlen(s);
if((l%2)==0)
{
b=l/2;
s[b]='*';
s[b+1]='*';
puts(s);
}}
