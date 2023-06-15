
#include<stdio.h>
#include<conio.h>

void main(){

int width,height,total;

clrscr();
printf("Enter Width of Rectangle : ");
scanf("%d",&width);
printf("Enter Height of Rectangle : ");
scanf("%d",&height);
total=width*height;
printf("Area of Rectangle is %d ",total);

getch();
}