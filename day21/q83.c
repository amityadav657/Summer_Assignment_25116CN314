#include <stdio.h>
int main() {
    char str[] = "AMIT YADAV";
    int v = 0, c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') v++;
        else if (ch >= 'a' && ch <= 'z') c++;
    }
    printf("Vowels: %d, Consonants: %d\n", v, c);
    return 0;
}