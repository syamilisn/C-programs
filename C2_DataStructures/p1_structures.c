//PROGRAM TO INITIALIZE STRUCTURE AND RETRIEVE THE VALUES
#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
typedef struct{
    int roll;
    char name[10];
    float marks;
} stud;

void main(){
    //clrscr();
    stud paru;
    printf("\nEnter the Roll number: ");
    scanf("%d", &paru.roll);
    printf("\nEnter the name: ");
    scanf("%s", &paru.name);
    printf("\nEnter the marks: ");
    scanf("%f", &paru.marks);
    //DISPLAY O/P
    printf("\nStudent Records: ");
    printf("\nROLL NAME    MARKS ");
    printf("\n----------------------------------");
    printf("\n%d %s %.2f",paru.roll, paru.name, paru.marks);
}