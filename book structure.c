//c program to define a structure named book 
#include<stdio.h>
#include<string.h>


struct book {
char title[30];
char author[30];
int publicationyear;
char ISBN[13];
float price;
} book1;

int main()
{

strcpy(book1.title,"introduction to c programming");
strcpy(book1.author,"John Smith");
book1.publicationyear=2022;
strcpy(book1.ISBN,"9780131103627");
book1.price=49.99;


printf("title:%s \n",book1.title);
printf("author:%s \n",book1.author);
printf("publication year:%d \n",book1.publicationyear);
printf("ISBN:%s \n",book1.ISBN);
printf("price:%.2f \n",book1.price);

    return 0;
}