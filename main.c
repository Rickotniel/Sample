#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "bibliotheque.h" 
int main() { 
printf("Puissance :\n");
int result = power( 2, 3 ); 
printf( "2^3 == %d\n\n", result ); 
printf("Factorielle :\n");
result = fact( 6 ); 
printf( "6! == %d\n\n", result ); 
printf("Permutation :\n");
int x=5, y=10;
printf("x=%d et y=%d\n", x, y);
permutation(&x,&y);
printf("x=%d et y=%d\n\n", x, y);

double a, b, c;
printf("Equation ax^2 + bx + c = 0\n");
printf("Entrer a, b et c : ");
scanf("%lf %lf %lf", &a, &b, &c);
second_degre(a, b, c);

int n;
printf("nombre premier\n");
printf("Entrer un nombre entier: ");
scanf("%d", &n);
nombre_premier(n);

Point p1, p2;
printf("Distance entre deux points\n");
printf("Entrer les coordonnees du point 1 (x y): ");
scanf("%lf %lf", &p1.x, &p1.y);
printf("Entrer les coordonnees du point 2 (x y): ");
scanf("%lf %lf", &p2.x, &p2.y);
double dist = distance(p1, p2);
printf("La distance entre les points est: %.2f\n", dist);
return EXIT_SUCCESS; 
} 