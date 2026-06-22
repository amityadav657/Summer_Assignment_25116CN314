#include <stdio.h>
int main() {
    char str[100], result;
    int count[256] = {0}, max = -1;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(max < count[(int)str[i]]) {
            max = count[(int)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character is: %c (%d times)\n", result, max);
    return 0;
}