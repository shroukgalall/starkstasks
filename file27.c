#include <stdio.h>

int main() {
	int n,m,num,sum=0;
	printf("enter the first number ");
	scanf("%d",&n);
	printf("enter the second number ");
	scanf("%d",&m);
	for (num=n;num<=m;num++)
	{sum+=num;
		printf(" %d",num);
      

}
  printf(" sum = %d",sum);
	
return 0;
}