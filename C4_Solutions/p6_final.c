#include <stdio.h>
int i,j;

void inputMatrix(int *p1){
    printf("Input Matrix Function:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d ", ((p1+i)+j));
        }
        //printf("\n");
    }
    printf("Display Matrix Function from Input Matric Function:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", (*(p1+i)+j));
        }
        printf("\n");
    }
}
void displayMatrix(int *p1){ //p1 is pointer to matrix
    printf("Display Matrix Function:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", (*(p1+i)+j));
        }
        printf("\n");
    }
}
void main(){
    int m1[3][3] = {1,1,1,2,2,2,3,3,3};
    int m2[3][3] = {1,1,1,2,2,2,3,3,3};
    int *p1 = &m1[0][0];
    int *p2 = &m2[0][0];
    
    //PRINTS MATRIX
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", *(*(m1+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", (*(p1+j)+i));
        }
        printf("\n");
    }
    inputMatrix(p1);
    displayMatrix(p1);
}