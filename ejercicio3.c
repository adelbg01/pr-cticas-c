#include <stdio.h>
int main(){
float celsius, farenheit;
printf("Escriba un número en grados celsius: ");
scanf("%f", &celsius);
farenheit = celsius*9/5+32;
printf("El número en grados Farenheit es: ");
printf("%f", farenheit);
return 0;
}
