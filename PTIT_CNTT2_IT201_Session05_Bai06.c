#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n) {
    if (n < 1) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, n);
    printf("%d", result);
    return 0;
}
