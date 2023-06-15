#include<stdio.h>
#include<conio.h>

void main(){

int P,R,T,total;

clrscr();
printf("Enter Principal Amount : ");
scanf("%d",&P);
printf("Enter Rate Per Annum : ");
scanf("%d",&R);
printf("Enter Time(in years) : ");
scanf("%d",&T);
total=(P*R*T)/100;
printf("Your Simple Interest is %d ",total);


getch();

}