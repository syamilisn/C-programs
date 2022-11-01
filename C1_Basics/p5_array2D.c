#include <stdio.h>
#define ROW 3
#define COL 3
void main(){
    int i ,j;
    int arr[3][3] = {
        {1,0,1},
        {0,1,0},
        {1,2,1}
    };
    
    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}