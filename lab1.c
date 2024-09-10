#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 12, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];
    
    // Находим максимальный и минимальный элементы
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Вычисляем разницу
    int diff = max - min;
    
    printf("Максимальный элемент: %d\n", max);
    printf("Минимальный элемент: %d\n", min);
    printf("Разница между максимальным и минимальным: %d\n", diff);
    
    return 0;
}
