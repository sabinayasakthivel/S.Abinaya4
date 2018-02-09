#include<stdio.h>
#include<string.h>
int main()
{
 char s[20];
 int i,l,count=0;
 gets(s);
 l=strlen(s);
 for(i=0;i<l;i++)
 if(s[i]>='0'&&s[i]<='9')
 count++;
 printf("number of character are:%d",count);
 return 0;
 }
