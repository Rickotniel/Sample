#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 

// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ); 

// fonction de permutation
void permutation(int *a, int *b);

// Exercice 7: resoudre dans R une equation du 2nd degre
void second_degre(double a, double b, double c);

// Exercice 12a : Verifie si un nombre est premier
void nombre_premier(int n);

//Exercice 13: lit et affiche la distance entre deux points
typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2);
#endif 