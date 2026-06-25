#include <stdio.h>
#include <string.h>
int main() {
    char names[5][20] = {"amit", "kumar", "yadav", "ram"," ravan"};
    char temp[20];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}