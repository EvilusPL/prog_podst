#include <stdio.h>

int main(void) {
    float matrix[3][3];
    float sum = 0.0;
    int i,j;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Podaj [%d,%d] element macierzy: ", i+1, j+1);
            scanf("%f", &matrix[i][j]);
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            sum = sum + matrix[i][j];
        }
    }
    sum = sum / (3*3);
    printf("Srednia elementow w macierzy wynosi %.2f\n", sum);
    printf("Elementy parzyste macierzy: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if ((int)matrix[i][j] % 2 == 0) {
                printf("[%d,%d] = %.1f\n", i+1, j+1, matrix[i][j]);
            }
        }
    }
    printf("Elementy ujemne macierzy: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (matrix[i][j] < 0.0) {
                printf("[%d,%d] = %.1f\n", i+1, j+1, matrix[i][j]);
            }
        }
    }
    printf("Elementy lezace na przekatnej macierzy: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (i == j) {
                printf("[%d,%d] = %.1f\n", i+1, j+1, matrix[i][j]);
            }
        }
    }
    printf("Macierz: \n");
    for (i=0; i<3; i++) {
        printf("[");
        for (j=0; j<3; j++) {
            printf("%4.1f ", matrix[i][j]);
        }
        printf("]\n");
    }
    return 0;
}