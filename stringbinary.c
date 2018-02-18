#include<stdio.h>
#include<string.h>

int main()
{
char  s[50];
int n,i,c=0;
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='1'||s[i]=='0')
c++;
}

if(c==n)
printf("yes");
else
printf("no");
return 0;
}
