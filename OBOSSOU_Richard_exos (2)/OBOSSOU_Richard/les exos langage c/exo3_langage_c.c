#include <stdio.h>
int main() {
    float fcfa, euro;
    printf("Entrez le montant en FCFA :");
    scanf("%f", &fcfa);
    euro = fcfa / 655,957;
    printf("Montant en Euro : %.2f €\n",euro);
    return 0;
}