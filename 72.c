#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
int a,l,V;

gets(s);
l=strlen(s);
for(a=0;a<l;a++)
{

if(s[a]=='a'||s[a]=='e's[a]||=='i'||s[a]=='o'||s[a]=='u'||s[a]=='A'||s[a]=='E'||s[a]=='I'||s[a]=='O'||s[a]=='U')
V++;
}
if(V>0)
printf("yes");
else
printf("no");
}
