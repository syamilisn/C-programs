#include<stdio.h>

int main(){
    int a ;
    float b;
    char name[10];
    printf("Enter int, float and char value\n");
    //scanf("%d %f %s", &a, &b, name);// if entered wrong it will display only 1 value or else all 3 values
    //printf("%d %f %s\n", a, b, name);
    printf("%d",scanf("%d %f %s", &a, &b, name)); //return 3 if correct input or else 1
    return 0;
}