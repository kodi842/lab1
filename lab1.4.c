#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS];
    int i, j;
    int col_sum[COLS];

    // Инициализация случайными числами
    srand(time(NULL));
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    // Вычисление суммы по столбцам
    for (j = 0; j < COLS; j++) {
        col_sum[j] = 0;
        for (i = 0; i < ROWS; i++) {
            col_sum[j] += matrix[i][j];
        }
    }

    // Вывод результатов
    printf("Двумерный массив:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nСуммы по столбцам:\n");
    for (j = 0; j < COLS; j++) {
        printf("Столбец %d: %d\n", j + 1, col_sum[j]);
    }

}