//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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
    selectionSort(arr, n);
    printf("\n\nMang sau khi sap xep (Selection Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nPhan tich do phuc tap thoi gian:\n");
    printf("- Thuat toan sap xep chon co do phuc tap thoi gian:\n");
    printf("  + Truong hop tot nhat: O(n^2)\n");
    printf("  + Trung binh: O(n^2)\n");
    printf("  + Truong hop xau nhat: O(n^2)\n");
    printf("- Thuat toan khong phu thuoc vao tinh trang ban dau cua du lieu.\n");

    return 0;
}
