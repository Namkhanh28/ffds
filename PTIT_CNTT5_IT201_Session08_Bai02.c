//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid; // Tìm thấy
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
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
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang da sap xep.\n", target, result);
    else
        printf("Khong tim thay gia tri %d trong mang.\n", target);
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("- Thuat toan tim kiem nhi phan co do phuc tap la O(log n)\n");
    printf("- So lan chia doi toi da voi %d phan tu la: %d lan.\n", n, (int)(log2(n) + 1));

    return 0;
}
