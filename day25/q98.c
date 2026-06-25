#include <stdio.h>
#include <string.h>
int main() {
 char str1[] = "apple";
 char str2[] = "pale";
int i, j;
printf("Common characters: ");
    for (i = 0; i < strlen(str1); i++) {
    for (j = 0; j < strlen(str2); j++) {
               if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                str2[j] = '\0'; 
                break;
            }
        }
    }
    return 0;
}