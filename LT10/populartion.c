#include <stdio.h>

int main()
{
    int men, women, literateMen, literateWomen, illiterateTotal, literateTotal, illiterateMen, illiterateWomen, totalPopulation=80000;

    men = 80000 * 0.52;
    women = totalPopulation - men;
    literateTotal = 80000 * 0.48;
    literateMen = 80000 * 0.35;
    literateWomen = literateTotal - literateMen;
    illiterateMen = men - literateMen;
    illiterateWomen = women - literateWomen;

    printf("The number of illiterate men of the town is %d\n", illiterateMen);
    printf("The number of illiterate women is %d\n", illiterateWomen);

    return 0;
}
