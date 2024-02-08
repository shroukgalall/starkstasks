#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0;
	 unsigned long long int b = 1;
	  unsigned long long int sum=0;
    for (unsigned int i = 0; i <= n; ++i) {
        sum = a + b;
        a = b;
        b = sum;
		printf("%f ,",b);
    }
    return b;
}
void main(void) {
    unsigned int d=10;
  unsigned long long int fibonacci(unsigned int d)
       // printf("Fibonacci(%u) = %llu\n", n, fib);

        	printf("%f ,",b);
   
}