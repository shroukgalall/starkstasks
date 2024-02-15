 #include <stdio.h>
 int main(){
 int seen [10]={0};
 int n;
 printf("enter the number \n");
 scanf("%d",&n);
 int rem ;
 while (n>0)
{rem =n%10;
if (seen[rem] == 1)
 break;
seen [rem]=1;
n=n/10;
}
if (n>0){
printf("yes");}
else{
printf("no");}
return 0 ;
}