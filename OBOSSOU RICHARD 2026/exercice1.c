#include <stdio.h>
int main() {
int nombre = 42;
float prix = 15.75;
char initiale ='P';
printf("nombre = %d, prix = %2.f, initiale = %c\n", nombre, prix, initiale);
int nbr;
printf("entrer un nombre entier : \n");
scanf("%d",&nbr);
if (nbr<0)  {
    printf("le nombre est negatif.\n");}
    else if (nbr == 0) {
        printf("le nombre est nul\n");
    } else  {
        printf("le nombre est positif\n");
    } 
    if (nbr % 2 == 0) {
        printf ("le nombre est pair\n");
    } else  {
        printf("le nombre est impaire\n");
    }
    printf("Affiche comptage de 1 a 5 :\n");
    for (int i =1; i<=5; i++) {
        printf("\nEntrez deux entiers pour calculer leur produit :\n");
    }
    int a, b, c;
    scanf ("%d %d", &a, &b);
c = a * b;
printf("Produit = %d\n",c);














    return 0;
}