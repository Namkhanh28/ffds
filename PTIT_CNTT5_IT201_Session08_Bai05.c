//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n;
    do {
        printf("Nhap so luong phan tu cua mang (0 < n < 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nMang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    insertionSort(arr, n);
    printf("\n\nMang sau khi sap xep (Insertion Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nPhan tich do phuc tap thoi gian:\n");
    printf("- Truong hop tot nhat (mang da sap xep): O(n)\n");
    printf("- Trung binh: O(n^2)\n");
    printf("- Truong hop xau nhat (mang sap xep giam dan): O(n^2)\n");

    return 0;
}
