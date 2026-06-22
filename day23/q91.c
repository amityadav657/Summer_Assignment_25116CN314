#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int count[256] = {0}, i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagrams.\n");
        return 0;
    }
    for(i = 0; s1[i] != '\0'; i++) {
        count[(int)s1[i]]++;
        count[(int)s2[i]]--;
    }
    for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagrams.\n");
            return 0;
        }
    }
    printf("Strings are Anagrams.\n");
    return 0;
}