#include <stdio.h>
typedef int matrix[3][3];
typedef int *ptr_matrix[3][3];
matrix m1 = {  
    {1,0,1},
    {1,0,1},
    {1,0,1}};
matrix m2 = {  
    {1,0,1},
    {1,0,1},
    {1,0,1}};
void matrixAddition(int row, int col){
    matrix sum;
    for(int i; i<row; i++){
        for(int j; j<col; j++){
            sum[i][j]  = m1[i][j] + m2[i][j];
        }
    }

    printf("The addition of the 2 matrices is \n");
    for(int i; i<row; i++){
        for(int j; j<col; j++){
            printf("%d ",sum[i][j]);
        }
    }
}
void main(){
    matrix m1 = {  
        {1,0,1},
        {1,0,1},
        {1,0,1}};
    matrix m2 = {  
        {1,0,1},
        {1,0,1},
        {1,0,1}};

    //ptr_matrix p1 = m1;
    //ptr_matrix p2 = m2;
    
    matrixAddition(3,3);
}