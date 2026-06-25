#include <stdio.h>
#include <string.h>
int main() {
    char words[4][20] = {"mango", "Cat", "banana", "I"};
    char temp[20];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}