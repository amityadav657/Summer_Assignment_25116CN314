#include <stdio.h>
int main() {
    int n, mat[10][10], sum = 0;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j) sum += mat[i][j];
        }
    }

    printf("Sum of primary diagonal elements: %d\n", sum);
    return 0;
}