#include <stdio.h>

#define N1 3
#define N2 2

void get_arr(int arr[][N2]) {
    puts("Введите значения элементов массива:");
    for (int i = 0; i != N1; i++)
        for (int j = 0; j != N2; j++) {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
}

void print_arr(int (*arr)[N2]) {
    puts("Элементы массива получили значения:");
    for (int i = 0; i < N1; i++)
        for (int j = 0; j < N2; j++) {
            printf("arr[%d][%d]=%d ", i, j, arr[i][j]);
            if (j == N2 - 1)puts("");
        }
}

void print_arr_second(int *arr, int len1, int len2, int n) {
    int p = 0, c = 0;
    for (int i = 0; i != len1; i++)
        for (int j = 0; j != len2; j++) {
            c++;
            printf("arr[%d][%d]=%d ", i, j, *(arr + p));
            if (c == n) {
                c = 0;
                puts("");
            }
            p++;
        }
}

void imitation_main() {
    int a[N1][N2], n;
    get_arr(a);
    print_arr(a);
    puts("Количество элементов, выводимых в строке таблицы:");
    scanf("%d", &n);
    print_arr_second(&a[0][0], N1, N2, n);
}