


#include <stdio.h>
// n! = n × (n-1) × (n-2) × ... × 1
// 0! = 1 (par définition)
long factorielle(int n) {
// Cas de base
if (n <= 1) {
return 1;
}// Cas récursif
return n * factorielle(n - 1);
}
int main(void) {
for (int i = 0; i <= 10; i++) {
printf("%2d! = %ld\n", i, factorielle(i));
}
return 0;
}












return 0;
}