#include<stdio.h>
#include<conio.h>

void main(){

int base,height,total;

clrscr();
printf("Enter Base of Triangle : ");
scanf("%d",&base);
printf("Enter Height of Triangle : ");
scanf("%d",&height);
total=(base*height)/2;
printf("Area of Triangle is %d ",total);

getch();
}


