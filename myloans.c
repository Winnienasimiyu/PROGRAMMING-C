//c program to calculate loans 
#include<stdio.h>
int main(){
int age;
float income;
printf("Enteryourage:");
scanf("%d",&age);
printf("Enter your monthly income:");
scanf("%f",&income);
if(age>21000){
printf("CONGRATULATIONS YOU QUALIFY FOR THE LOAN.\n");
}
if(income>=21000){
printf("CONGRATULATIONS YOU QUALIFY FOR THE LOAN.\n");
}else{
printf("UNFORTUNATELY WE ARE UNABLE TO OFFER YOU A LOAN AT THIS TIME.\n");
}
return 0;
}
