#include <stdio.h>
int main() {
 int M, N,P;
 printf("Enter rows and columns of Matrix A (M N): ");
 scanf("%d %d", &M, &N);
 printf("Enter number of columns of Matrix B (P): ");
 scanf("%d", &P);
 int A[M][N], B[N][P], C[M][P];
 printf("Enter elements of Matrix A:\n");
 for(int i = 0; i < M; i++)
 for(int j = 0; j < N; j++)
 scanf("%d", &A[i][j]);
 printf("Enter elements of Matrix B:\n");
 for(int i = 0; i < N; i++)
 for(int j = 0; j < P; j++)
 scanf("%d", &B[i][j]);
 for(int i = 0; i < M; i++)
 for(int j = 0; j < P; j++)
 C[i][j] = 0;
 for(int i = 0; i < M; i++) {
 for(int j = 0; j < P; j++) {
 for(int k = 0; k < N; k++) {
 C[i][j] += A[i][k] * B[k][j];
 }
 }
 }
 printf("Resultant Matrix C (MxP):\n");
 for(int i = 0; i < M; i++) {
 for(int j = 0; j < P; j++) {
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }
 return 0;
}