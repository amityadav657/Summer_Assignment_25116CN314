#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Simple Quiz \n");
    printf("1. What is the capital of France?\n");
    printf("1) Berlin  2) Paris  3) rrome\nAnswer: ");
    scanf("%d", &answer);
    if(answer == 2) score++;
    printf("\n2. Which language is this program written in?\n");
    printf("1) C  2) Java  3) Python\nAnswer: ");
    scanf("%d", &answer);
    if(answer == 1) score++;

    printf("\nYour final score is: %d/2\n", score);
    return 0;
}