#include <stdio.h>
#define N 3
int i, j;
typedef struct{
    char name[20];
    int roll;
}stud;
void main(){
    stud arr[N];
    printf("Enter student name and roll:\n");
    for(i=0; i< N; i++){
        scanf("%s %d", &arr[i].name, &arr[i].roll);
    }
    for(i=0; i< N; i++){
        printf("%s %d\n", arr[i].name, arr[i].roll);
    }
}