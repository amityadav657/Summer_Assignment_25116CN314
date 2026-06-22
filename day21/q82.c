#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "DEATH", temp;
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    printf("Reversed: %s\n", str);
    return 0;
}