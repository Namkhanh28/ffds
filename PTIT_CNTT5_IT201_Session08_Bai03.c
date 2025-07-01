//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
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
    bubbleSort(arr, n);
    printf("\n\nMang sau khi sap xep (Bubble Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nPhan tich do phuc tap thoi gian:\n");
    printf("- Truong hop tot nhat (mang da duoc sap xep): O(n)\n");
    printf("- Truong hop xau nhat (sap xep nguoc): O(n^2)\n");
    printf("- Trung binh: O(n^2)\n");

    return 0;
}
