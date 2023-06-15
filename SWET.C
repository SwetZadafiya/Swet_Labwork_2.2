#include<stdio.h>
#include<conio.h>

void main(){

const float pi = 3.14;
int radius,total;

clrscr();
printf("Enter Radius of circle : ");
scanf("%d",&radius);
total=pi*radius*radius;
printf("\nArea of circle is %d ",total);



getch();
}