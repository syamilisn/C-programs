#include <stdio.h>
int factorial(int n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}

void main(){
    int n =4;
    printf("The factorial of %d is %d", n, factorial(n));
}