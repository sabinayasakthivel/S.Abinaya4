#iclude<stdio.h>
int main()
{
int n,=1;
while(n!=0)
{
n=n%10;
s=s*n;
n=n/10;
}
printf("%d",s);
return 0;
}
