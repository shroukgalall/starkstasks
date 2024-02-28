#include <stdio.h>

void main(void)
{
	float n1;
	float n2;
	printf("please enter n1 ");
	scanf("%f",&n1);
    printf("please enter n2 ");
	scanf("%f",&n2);
	float z=n1+n2;
	printf("n1+n2= %f\n", z);
    float y=n1-n2;
	printf("n1-n2= %f\n",y);
	float x=n1*n2;
	printf("n1*n2= %f\n",x);
	float a=n1/n2;
	printf("n1/n2= %f\n",a);

}