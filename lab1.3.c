#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    // Динамическое выделение памяти для массива
    int *arr = (int*)malloc(size * sizeof(int));

    // Проверка на успешное выделение памяти
    if (arr == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Заполнение массива
    for (int i = 0; i < size; i++) {
        printf("Введите элемент %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Вывод массива
    printf("Массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Освобождение памяти
    free(arr);

}