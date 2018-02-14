#include<stdio.h>
//#include<conio.h>
#include<string.h>
void main()
{
int i,j,n;
char a[100];
//clrscr();
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<=i;j++)
{
printf("%c",a[j]);
}
}
//getch();
}
