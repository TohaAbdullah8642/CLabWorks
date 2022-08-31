#include<stdio.h>

int main () {;

int distance;
float meter;
float feet;
float inches;
float centimeters;

printf ("Please Enter the distance between mirpur to ashulia =>" );
scanf ("%d", & distance);

meter = (distance * 1000);
feet = (distance * 3280.84);
inches = (distance * 39370.1);
centimeters = (distance * 100000);

printf ("here is the result of the meter,feet,inches and centimeteres are from mirpur to ashulia\n" );
printf ("meter = %f\n", meter);
printf ("feet = %f\n", feet);
printf ("inches = %f\n", inches);
printf ("centimeters = %f\n", centimeters);

    return 0;

}
