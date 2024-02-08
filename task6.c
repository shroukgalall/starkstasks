 #include <stdio.h>

 void main (void){
	unsigned int x = 513;
 unsigned int y = 2;
	 unsigned int foo (unsigned int x , unsigned int y);
 }
 unsigned int foo (unsigned int n , unsigned int r)
{
 if (n > 0) 
return((n % r) + foo(n/r, r));
 else
	 return 0;
}