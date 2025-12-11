#include <stdio.h> 
#include <stdlib.h> 
#include "SampleLib.h" 
int main() { 
printf("Puissance :\n");
int result = power( 2, 3 ); 
printf( "2^3 == %d\n", result ); 
printf("Factorielle :\n");
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
printf("Permutation :\n");
int x=5, y=10;
printf("x=%d et y=%d\n", x, y);
permutation(&x,&y);
printf("x=%d et y=%d\n", x, y);
return EXIT_SUCCESS; 
} 