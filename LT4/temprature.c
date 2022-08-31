#include<stdio.h>

    int main () {;
float f;
float c;

printf("please enter the Fahrenheit ");
scanf("%f", &f);

c = ( f - 32)*5/9;

printf("the temperature in centigrade are %.2f c", c);

    return 0;
}
