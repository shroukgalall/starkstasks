 #include <stdio.h>
 int main(){
 // task 6 week 5
 int n=5;
 int a[n],*p;
 printf("enter 5 elements in the array ");
 for(p=a;p<=a+n-1;p++)
 scanf("%d",p);
 printf("elements in the reverse order :\n");
 for (p =a+n-1; p>=a;p--)
 printf("%d",*p);
 
 return 0;
 }