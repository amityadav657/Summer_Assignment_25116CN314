#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "hello";
    char s2[] = "lohel";
    char temp[100];

    if (strlen(s1) != strlen(s2)) {
        printf("Not a rotation\n");
    } else {
        strcpy(temp, s1);
        strcat(temp, s1); 

        if (strstr(temp, s2)) 
            printf("String is a rotation\n");
        else 
            printf("Not a rotation\n");
    }
    return 0;
}