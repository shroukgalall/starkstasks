#include <stdio.h>

void main(void) {
	int n;
	int a;
	int b;
	int c=0;
	int sum=0;
	int num=0;
	int o=num;
	
printf("enter anumber N ");
scanf("%d",&n);


printf("enter the smallest number ");
scanf("%d",&a);

printf("enter the greatest number  ");
scanf("%d",&b);
for(num=0;num<n;num++){
	
	do
	{c=o%10;
	sum=sum+c;
	o=o/10;}
while (o!=0);
	
if (a<sum<b)
    num+=num;}
printf("%d",num);																																																																																						

}