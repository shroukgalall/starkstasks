#include <stdio.h>

void main(void) {
	int password =1234;
	int ID =12345;
	int id,pass,count=3;
	printf ("enter your ID\n");
	scanf("%d",&id);
	if (id==ID){
    printf ("enter your password\n");
	start:
	scanf("%d",&pass);
	if(pass==password){
    printf ("Welcome\n ");}
    else  { count--;
if (count!=0){	
    printf("try one more time\n") ;
	goto start;}
else if (count ==0)
{printf("you can not try again\n");}
	}	}
	else 
	{printf("your ID is not correct\n");	}
		
	}