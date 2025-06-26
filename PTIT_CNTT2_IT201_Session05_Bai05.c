#include <stdio.h>
#include <string.h>

int palindrome(char arr[], int start, int end) {
    if (start >= end) return 0;
    if (arr[start] != arr[end]) {
        return 1;
    }
    return palindrome(arr, start + 1, end - 1);
}

int main() {
    char str[50];
    printf("Please input a string: ");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';
    int result = palindrome((str), 0, strlen(str) - 1);
    if (result == 1) {
        printf("Palindrome invalid");
    }
    else {
        printf("Palindrome valid");
    }
    return 0;
}
