//c program to define a structure named book 
#include<stdio.h>
#include<string.h>


struct book{
char title[30];
char author[30];
int year;
char ISBN[13];
float price;
}book1;

int main()
{

printf("enter the book title: ");
scanf(" %[^\n]", &book1.title);

printf("enter the book author: ");
scanf(" %[^\n]", &book1.author);

printf("enter the publication year: ");
scanf(" %d", &book1.year);

printf("enter the book ISBN: ");
scanf(" %[^\n]", &book1.ISBN);

printf("enter the book price: ");
scanf(" %.2f\n", &book1.price);

    return 0;
}