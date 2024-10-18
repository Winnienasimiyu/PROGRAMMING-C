//c program to calculate simple interest 
#include<stdio.h>
int main(){
int principal,time;
float rate,interest;
printf("Enter principal: ");
scanf("%d",&principal);
printf("Enter time: ");
scanf("%d",&time);
printf("Enter rate: ");
scanf("%f",&rate);
//simple interest calculation=(principal amount*time*rate)/100
printf("The simple interest: %.2f\n",interest);
return 0;
}