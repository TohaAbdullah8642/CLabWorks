
#include<stdio.h>;

int main () {;
float b_salary;
float d_salary;
float house_rent;
float gross_salary;

printf("Please enter your basic salary=> ");
scanf("%f",&b_salary);

d_salary = (40 * b_salary)/100;
house_rent = (20*house_rent);

gross_salary = b_salary + d_salary + house_rent;

printf("your gross salary is==> %.2f taka", gross_salary);

    return 0;
}
