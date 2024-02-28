#include <stdio.h>

int points (int n){
if (90<=n<=100)
	return 4;
else if (80<=n<=89)
 return 3;
 else if (70<=n<=79)
 return 2;
else if (60<=n<=69)
 return 1;
	else 
		return 0;
}void main(void) 
{int x;
 printf("enter your points");
scanf("%d",&x);
 printf ("%d" , points (x));}