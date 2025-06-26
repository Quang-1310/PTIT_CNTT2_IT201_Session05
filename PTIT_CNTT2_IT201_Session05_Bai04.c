#include <stdio.h>

int total(int firstNumber, int secondNumber) {
    if (firstNumber == secondNumber) return secondNumber;
    return firstNumber + total(firstNumber + 1, secondNumber);
}

int main() {
    int firstNumber, secondNumber;
    printf("Nhap so thu nhat: ");
    scanf("%d", &firstNumber);
    printf("Nhap so thu hai: ");
    scanf("%d", &secondNumber);
    if (firstNumber < 0 || secondNumber < 0) {
        printf("Khong hop le");
        return 1;
    }
    int result = total(firstNumber,secondNumber);
    printf("Tong tu %d den %d = %d", firstNumber, secondNumber, result);
    return 0;
}