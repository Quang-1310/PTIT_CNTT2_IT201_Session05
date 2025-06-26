#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void checkNumber(char arr[], int index) {
    if (arr[index] == '\0') {
        printf("%s", arr);
        return;
    }
    if (arr[0] == '0') {
        for (int i = 0; i < sizeof(arr); i++) {
            arr[i] = arr[i + 1];
        }
    }
    if (!isdigit(arr[index])) {
        printf("Input khong hop le");
        return;
    }
    checkNumber(arr, index + 1);
}

int main() {
    char arr[10];
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';
    checkNumber(arr, 0);
    return 0;
}
