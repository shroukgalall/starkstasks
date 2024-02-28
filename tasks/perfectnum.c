#include <stdio.h>
void perfect(void )
{int i =1;int x=0;
	for (int i =1;i <=100;i++)
	{int n=1;
		for (int n=1;n<=i;n++)
		{
			while (i%n==0)
			{
				//printf("%d",n);
				x=x+n;
			}
		}	
		int m=2*i;
		if (x==m)
		{	printf("%d \n",m);
			//return m;
		}	
        //printf("%d \n",m);
		}}
	void main(void){perfect();}