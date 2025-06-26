#include <stdio.h>

int total(int n) {
    if (n == 1) return 1;
    return n + total(n - 1);
}

int main() {
    int number;
    printf("Nhap 1 so: ");
    scanf("%d", &number);
    int result = total(number);
    printf("Tong tu 1 den %d = %d", number, result);
    return 0;
}