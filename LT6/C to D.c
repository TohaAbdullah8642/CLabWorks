
#include<stdio.h>

int main(){

    int C;
    int D;

    printf("Enter the value of C : ");
    scanf("%d", &C);

    printf("Enter the value of D : ");
    scanf("%d", &D);

    C = C+D;
    D = C-D;
    C = C-D;

    printf("\n The value of C: %d", C);
    printf("\n The value of D: %d", D);

return 0;

}
