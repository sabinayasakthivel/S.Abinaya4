#include<stdio.h>
#include<string.h>
int main()
{
char s[40];
int l,i,count=1;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
if(s[i]==' ')
count =count+1;
printf("number of words in the given sentence:%d",count);
return 0;
}
