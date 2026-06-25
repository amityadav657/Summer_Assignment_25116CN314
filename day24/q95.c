#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "I love programming in C";
    char longest[50], current[50];
    int i = 0, j = 0, max = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\0') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > max) {
                max = strlen(current);
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }
    current[j] = '\0';
    if (strlen(current) > max) strcpy(longest, current);

    printf("Longest word: %s\n", longest);
    return 0;
}