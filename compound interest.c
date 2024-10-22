//c program to calculate compound interest 
#include<stdio.h>
#include<math.h>
int main(){
int principle,number_of_compounded_years;
float rate;
double amount,total_number_of_years;

printf("principle: ");
scanf("%d",&principle);

printf("number of compounded years: ");
scanf("%d",&number_of_compounded_years);

printf("rate: ");
scanf("%f",&rate);

printf("total number of years: ");
scanf("%lf",&total_number_of_years);

amount=principle*pow((1+rate/number_of_compounded_years),(number_of_compounded_years*total_number_of_years));

printf("amount:%.2lf",amount);
    
    return 0;
}
