#include <stdio.h>

int main(void) {
 int n,s=0,t;
 printf("enter the number");
 scanf("%d",&n);
 while(n!=0)
 {
 	s=s*10;
 	s=s+n%10;
 	n=n/10;
 	
 }
 while(s!=0)
 {
 	t=s%10;
 	s=s/10;
 	printf("\t%d",t);
     
}
return 0;
}
