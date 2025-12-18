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
// Definition de la fonction permutation
void permutation (int *a, int *b){
    int conteneur = *a;
    *a = *b;
    *b = conteneur;
}


// Definiition de la fonction de resolution d'une equation du second degre
void seconddegre (){
     int a,b,c;
    float x1,x2,x0,D;
    printf("entre la valeur de a: \n");
    scanf("%d", &a);
    printf("entrer la valeur de b: \n");
    scanf("%d", &b);
    printf("entrer valeur de c: \n");
    scanf("%d", &c);
     D = b*b - 4*a*c;
    if (D>0){
        printf("l'equation admet deux solutions x1 et x2 \n");
        x1 = (-b-sqrt(D))/2*a;
        x2 = (-b+sqrt(D))/2*a;
        printf("x1 = %.2f et x2 = %.2f", x1, x2);
    }
    else if (D = 0){
        printf("l'equation admet une solutions double x0 \n");
        x0 = b/2*a;
        printf("x0 = %.2f", x0);
    }
    else{
        printf("l'equation n'admet pas de solution \n");
    }


}

//Definition de la fonction parité
int parite(){
    int x;
    printf("Entrez votre  nombre: ");
    scanf("%d", &x);

    if (x % 2 == 0){
        printf("le nombre %d est paire", x);

    }
     else{
            printf("le nombre %d est impaire", x);
        }
 return 0;
    }



// fonction distande de deux points

void distance(){
 double xA, yA, xB, yB, distance;    
    // Saisie des coordonnées

    printf("=== Calcul de la distance entre deux points A et B ===\n");
    
    printf("Entrez les coordonnées du point A :\n");
    printf("xA = ");
    scanf("%lf", &xA);
    printf("yA = ");
    scanf("%lf", &yA);
    
    printf("\nEntrez les coordonnées du point B :\n");
    printf("xB = ");
    scanf("%lf", &xB);
    printf("yB = ");
    scanf("%lf", &yB);
    
    // Calcul de la distance
    distance = sqrt(power(xB - xA, 2) + power(yB - yA, 2));
    
    // Affichage du résultat
    printf("\n-------------------------------------------------\n");
    printf("Point A : (%.2f, %.2f)\n", xA, yA);
    printf("Point B : (%.2f, %.2f)\n", xB, yB);
    printf("Distance AB = %.4f\n", distance);
    printf("-------------------------------------------------\n");
    
    }