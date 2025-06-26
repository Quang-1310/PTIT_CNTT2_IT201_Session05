#include <stdio.h>

int output(int n, int start) {
    if (start > n) return n;
    printf("%d", start);
    return output(n, start + 1);
}

int main() {
    int number;
    int start = 1;
    printf("Nhap 1 so: ");
    scanf("%d", &number);
    output(number, start);
    return 0;
}