//
// Created by NAM KHANH on 01/07/2025.
//
#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
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
    int target;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);
    if (result != -1)
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", target, result);
    else
        printf("Khong tim thay gia tri %d trong mang.\n", target);
    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf("- Thuat toan tim kiem tuyen tinh co do phuc tap O(n)\n");
    printf("- Vi du: voi %d phan tu, thuat toan co the phai kiem tra toi da %d lan.\n", n, n);
    return 0;
}
