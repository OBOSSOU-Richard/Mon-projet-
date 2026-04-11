#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[30];
    char telephone[15];
    int age;
} Contact;

void afficherContact(Contact c) {
    printf("Nom: %s | Tel: %s | Age: %d\n", c.nom, c.telephone, c.age);
}

int rechercherContact(Contact repertoire[], int n, char nom[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(repertoire[i].nom, nom) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;

    
    do {
        printf("Nombre de contacts :\n");
        scanf("%d", &N);
    } while (N < 1 || N > 50);

    
    Contact repertoire[50];

    for (int i = 0; i < N; i++) {
        printf("--- Contact %d ---\n", i + 1);

        printf("Nom :\n");
        scanf("%s", repertoire[i].nom);

        printf("Telephone :\n");
        scanf("%s", repertoire[i].telephone);

        printf("Age :\n");
        scanf("%d", &repertoire[i].age);
    }

    
    printf("=== REPERTOIRE (%d contacts) ===\n", N);

    for (int i = 0; i < N; i++) {
        printf("[%d] ", i + 1);
        afficherContact(repertoire[i]);
    }

    
    printf("=== RECHERCHE ===\n");

    char nomRecherche[30];
    printf("Nom a rechercher :\n");
    scanf("%s", nomRecherche);

    int indice = rechercherContact(repertoire, N, nomRecherche);

    if (indice != -1) {
        printf("Contact trouve : ");
        afficherContact(repertoire[indice]);
    } else {
        printf("Contact non trouve\n");
    }

    return 0;
}