#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "programming";
    int n = strlen(str);

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
        if (i == j) {
            printf("%c", str[i]);
        }
    }
    return 0;
}