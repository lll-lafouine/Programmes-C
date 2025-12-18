#include <stdio.h> 
#include <stdlib.h> 
#include "bibliotheque.h" 
#include "bibliotheque.c" 
int main( void ) { 
    
    // appel de fonnction  puissance
int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
result = fact( 6 ); 
// appel de fonction factorielle
printf( "6! == %d\n", result ); 
// appel de la fonction permuation

 int X, Y;
    printf("entre la premiere valeur: \n");
    scanf("%d", &X);
    printf("entrer la deuxieme valeur: \n");
    scanf("%d", &Y);
    printf("avant permutation X = %d et Y = %d \n\n", X, Y);
    permutation(&X, &Y);
 printf("apres permution x = %d et y = %d \n \n", X, Y);
// appel de la fonction de resolution d'equation du second degre
seconddegre();
// Appel de fonction parité
parite();
// appel de fontion distance de deux point
distance();
return EXIT_SUCCESS; 
 }
