#include <stdio.h>
#define ROW 3
#define COL 3
typedef int matrix[3][3];
int (*)[3] matrixInput(){
    matrix m1 = {
        {1,0,1},
        {0,1,0},
        {1,2,1}
    };
    return m1;
}
void main(){
    int i ,j, *p = matrixInput();
    matrix direct = matrixInput();
    int arr[3][3] = {
        {1,0,1},
        {0,1,0},
        {1,2,1}
    };
    int arr2[3][3] = {
        {1,0,1},
        {0,1,0},
        {1,2,1}
    };
    int sum[3][3];

    for(i=0; i< ROW; ++i)
        for(j=0; j< COL; ++j)
            sum[i][j] = arr[i][j] + arr2[i][j];

    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
// user ip
    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            //scanf("%d ", &*(*(arr+i)+j));
        printf("\n");
    }
    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            printf("%d ", *(*(arr+i)+j));
        printf("\n");
    }
    printf("custom:\n");
    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            printf("%d ", direct);
        printf("\n");
    }
}