#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10 // Размер массива

int main() {
    int arr[ARRAY_SIZE];

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными числами
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100; // Генерируем случайное число от 0 до 99
    }

    // Вывод элементов массива
    printf("Массив: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}