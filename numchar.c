#include<stdio.h>
#include<string.h>
void main()
{
 char s[20];
 int i,l,count=0;
 gets(s);
 l=strlen(s);
 for(i=0;i<l;i++)
 if((s[i]>='a'&&s[i]<='z')||(s[i]<='Z'&&s[i]>='A'))
 count++;
 printf("number of character are:%d",count);
 }
