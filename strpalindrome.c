#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int i;
gets(a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(i==0)
printf("the string  is palindrome");
else
printf("the string is not palindrome");
}
