//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Trả về chỉ số nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
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
    printf("\nMang da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int target;
    printf("\n\nNhap gia tri can tim: ");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri arr[%d].\n", target, result);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", target);
    }
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("- Truong hop tot nhat (tim thay o vi tri dau tien): O(1)\n");
    printf("- Trung binh: O(n/2)\n");
    printf("- Truong hop xau nhat (khong tim thay hoac o cuoi): O(n)\n");

    return 0;
}
