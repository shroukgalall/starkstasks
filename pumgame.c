#include <stdio.h>

void main(void) {
	int n=1;
	int count;
	int i=1;
	int r=4;
printf("enter anumber");
scanf("%d",&count);
while(i<=count)
{
	
	printf("%d",n);
		n++;
	if (n==r)
	{
		n++;
		i++;
		r=r+4;
		printf("pum\n");
}}
}
