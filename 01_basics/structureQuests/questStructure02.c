// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>
// Typedef Is Used To Rename Any Predefined Keyword In C.

/*
typedef float f;
int main(){
    f num = 2.34234;
    printf("%f", num);
    return 0;
}
*/

// Now We Use This Typedef In Structures.
typedef struct books
{
    char name[50];
    int price;
    int noOfPages;
} book; // Here We Define The New Name Of The Struct.
void main(){
    // Now We Can Easily Use The book Name For Initialisation.
    book a;
    strcpy(a.name, "Sapiens");
    a.price = 589;
    a.noOfPages = 623;

    printf("Name Of First Book : %s\n", a.name);
    printf("Price Of This Book is Rs.%d\n", a.price);
    printf("Total No. Of Pages In This Book = %d\n", a.noOfPages);
}