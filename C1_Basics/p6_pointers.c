#include <stdio.h>
/*
int * integerPtr(){
    return;
}
*/
void arrayPrint(int *a){
    printf("Printing from inside the array:\n");
    for(int i =0;i<5;i++) printf("%d ",a[i]);
    //return a;
}
void arrayPrint2D(int *a){
    printf("Printing from inside the array 2D:\n");
    for(int i =0;i<5;i++) printf("%d ",a[i]);
}
void main(){
    int p = 10;
    int* ptr = &p;
    printf("%d\n",p);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    printf("%d\n",ptr);
    int a[5] = {11,2,3,4};
    int *ptr_a = a;
    printf("Array: %d\n",*ptr_a);
    arrayPrint(ptr_a);
    //int b[5] = arrayPrint(*ptr_a);
    //printf("B array\n");
    //for(int i =0;i<5;i++) printf("%d ",a[i]);
    int b[2][2]={1,1,1,1};
    //int *ptr_b[2][2] = b;
    //arrayPrint2D(ptr_b);

    //POINTER CHAINS
    int **ptr_c = &ptr;
    printf("value using chain pointer: %d\n",**ptr_c);

    int d[5] = {1,2,3,4,5};
    int *ptr_d = d;
    //PRINT ARRAY USING POINTER
    for(int i =0; i<5 ;i++){
        printf("%d ",*ptr_d++);
    }
    for(int i =0; i<5 ;i++){
        printf("%d ",*(ptr_d +i));
    }
}