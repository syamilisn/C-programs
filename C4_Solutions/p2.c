#include <stdio.h>
typedef int matrix[3][3];
matrix m1, m2, sum;
int i, j;
matrix* matrixInput(int row, int col, matrix m){
    for(i=0; i<row; ++i)
        for(j=0; i<col; ++j)
            scanf("%d",&m[i][j]);
            printf("%d",m[i][j]);
    return &m[0][0];
}
void matrixOutput(int row, int col, matrix m){
    for(i=0; i<row; ++i){
        for(j=0; i<col; ++j)
            printf("%d",m[i][j]);
        printf("\n");
    }
}
void matrixAddition(int row, int col){
    for(i=0; i<row; ++i)
        for(j=0; i<col; ++j)
            sum[i][j] = m1[i][j] + m2[i][j];
}
void main(){
    int row = 2, col = 2, n = 2; //n = number of matrices
    printf("Enter matrix 1: \n");
    matrix* m = matrixInput(row, col, m1);
    matrixOutput(row, col, m);
    printf("Enter matrix 2: \n");
    matrixInput(row, col, m2);
    printf("The addition of two matrices is :\n");
    matrixOutput(row, col, sum);

}