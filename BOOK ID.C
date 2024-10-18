//c program 
#include<stdio.h>
int main(){
int bookID;
int dueDate,returnDate;
int overdueDays;
int fine=0;
printf("Enter Book ID:");
if(scanf("%d",&bookID)!=1){
printf("Invalid input for Book ID.\n");
return 1;
}
printf("Enter Due Date:");
if(scanf("%d",&dueDate)!=1||dueDate<1||dueDate>31){
printf("Invalid input for Due Date.Please enter a valid day number(1-31).\n");
return 1;
}
printf("Enter Return Date:");
if(scanf("%d",&returnDate)!=1||returnDate<1||returnDate>31){
printf("Invalid input for Return Date.Please enter a valid day number(1-31).\n");
return 1;
}
overdueDays = returnDate - dueDate;
if(overdueDays > 0){
if(overdueDays <= 7){
fine = 20;
}else if(overdueDays <= 14){
fine = 50;
}else{
fine = 100;
}
}else{
overdueDays = 0;
}
printf("\n---FineDetails---\n");
printf("BookID:%d\n",bookID);
printf("DueDate:Day%d\n",dueDate);
printf("ReturnDate:Day%d\n",returnDate);
printf("OverdueDays:%d\n",overdueDays);
if(fine>0){
printf("FineAmount:%d\n",fine);
}else{
printf("No fine.Thank you for returning the book on time!\n");
}
return 0;
}