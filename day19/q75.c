#include <stdio.h>
int main() {
    int r, c, mat[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++ ) 
        scanf("%d", &mat[i][j]);

    printf("\nTranspose of the matrix:\n");
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}