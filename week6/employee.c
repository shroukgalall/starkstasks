#include<stdio.h>

struct employee{
int salary;
int bonus;
int deductions;
}Ahmed,Waleed, Amr;

int main (){
printf("enter ahmed salary,bonus,deductions\n");
scanf("%d%d%d",&Ahmed.salary,&Ahmed.bonus,&Ahmed.deductions); 
 printf("enter Waleed salary,bonus,deductions\n");
 scanf("%d%d%d",&Waleed.salary,&Waleed.bonus,&Waleed.deductions); 
 printf("enter Amr salary,bonus,deductions \n");
  scanf("%d%d%d",&Amr.salary,&Amr.bonus,&Amr.deductions);
  
  int x=Ahmed.salary+Ahmed.bonus-Ahmed.deductions;
  int y=Waleed.salary+Waleed.bonus-Waleed.deductions;
  int z=Amr.salary+Amr.bonus-Amr.deductions;
  
    printf("Ahmed total salary is %d \nWaleed total salary is %d \nAmr total salary is %d \n ",x,y,z);
  return 0;
}