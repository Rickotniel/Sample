#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include "bibliotheque.h" 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; 
} 
// fonction permutation
void permutation(int *a, int *b){
	int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}


void second_degre(double a, double b, double c){
    double delta = b*b - 4*a*c;
    if(a == 0){
        if(b != 0){
            double x = -c/b;
            printf("Equation du 1er degre: x = %.2f\n\n", x);
        } else {
                printf("pas de solution.\n\n");
            }
        return;
    }
    if(delta < 0){
        printf("Pas de solution reelle.\n\n");
    } else if(delta == 0){
        double x = -b/(2*a);
        printf("Une solution double: x1 = x2 = %.2f\n\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        printf("Deux solutions reelles: x1 = %.2f et x2 = %.2f\n\n", x1, x2);
    }
}


void nombre_premier(int n){
    if(n <= 1){
        printf("%d n'est pas un nombre premier.\n\n", n);
        return;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            printf("%d n'est pas un nombre premier.\n\n", n);
            return;
        }
    }
    printf("%d est un nombre premier.\n\n", n);
}

double distance(Point p1, Point p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double d = sqrt(dx*dx + dy*dy);
    return d;
}
