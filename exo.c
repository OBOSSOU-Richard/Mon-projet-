



#include <stdio.h>
// Version incorrecte (passage par valeur)
void echangeKO(int a, int b) {
int temp = a;
a = b;
b = temp;
// Échange les copies locales, pas les originaux !
}
// Version correcte (passage par adresse)
void echange(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main(void) {
int x = 5, y = 10;
printf("Avant : x=%d, y=%d\n", x, y);
echange(&x, &y);
// Passer les adresses
printf("Après : x=%d, y=%d\n", x, y);
return 0;
}






