#include <stdio.h>

int main() {
	int b,l;
	float  years=0.0;
printf("what is the weight of limat");
scanf("%d",&l);
printf("what is the weight of bob");
scanf("%d",&b);
do
{
b=b*2;
l=l*3;
years++;
}while (l<b);

printf("%f",years);

return 0;
}