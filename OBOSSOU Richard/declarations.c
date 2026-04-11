#include <stdio.h>
int main() {
int age;
float temperature;
char lettre;
age = 25;
temperature = 19.5;
lettre = 'A';
printf("valeur initiale: \n");
printf("age=%d\n",age);
printf("temperature=%.1f\n",temperature);
printf("lettre=%c\n\n",lettre);
int x, y;
float moyenne;
printf("entrer deux nombre entiers : ");
scanf("%d %d", &x, &y);
moyenne = (x + y) / 2.0;
printf("moyenne = %.2f\n\n",moyenne);
int a, b;
printf("entrer deux entiers a et b : ");
scanf("%d %d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("Apres echange : a = %d, b = %d\n", a, b);













    return 0;
}