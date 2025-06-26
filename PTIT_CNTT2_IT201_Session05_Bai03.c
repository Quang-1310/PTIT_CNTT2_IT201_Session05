#include <stdio.h>

int factorial(int number) {
    if (number == 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    int number;
    printf("Nhap vao 1 so: ");
    scanf("%d", &number);
    if (number < 0){
        printf("Khong hop le");
        return 1;
    }
    int result = factorial(number);
    printf("Giai thua cua %d = %d", number, result);
    return 0;
}