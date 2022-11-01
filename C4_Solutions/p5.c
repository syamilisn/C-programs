#include <stdio.h>
void main(){
    int i, j;
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
}