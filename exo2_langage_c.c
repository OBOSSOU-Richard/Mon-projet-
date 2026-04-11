#include <stdio.h>
int main() {
    int a = 10, b = 25;
    printf("Avant echange : a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Apres echange : a = %d, b = %d, b = %d\n", a, b);
    return 0;
}