#include <stdio.h>

int main() {
    double promedio = 0;
    float num;
    float cantidad = -1;

    printf("Ill calculate the average of all the numbers you give me until you enter the number 0 \n");

    do {
        printf("Type the numbers: ");
        scanf("%d", &num);
        promedio += num;
        cantidad += 1;

    } while (num != 0);

    promedio /= cantidad;

    printf("the average of the numbers you gave are: %g", promedio);

    return 0;
}