// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[12] = {1,2,5,4,6,7,8,12,23,6,5,7};
    int i, j=0;
    for(i=0;i<12;i++)
        if(arr[i]>arr[j])   j=i;
    printf("The maximum number is %d at index %d.\n", arr[j], j);

    return 0;
}