// for question see questString.txt file.

#include <stdio.h>
int main(){
    // we can use pointer in string (character array) as we use in integer arrays.
    // but we can also initialise a string with pointer see below.
    char *ptr = "Namaste India";
    // this will create a character array in a memory but this array don't have any name.
    // and a pointer namely ptr is pointing to the first element of this string.
    
    // NOTE : Such direct initialisation using pointers results in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change an individual element.
    // i.e. if we try to do ptr[0] = 'a'; --> will give an error.

    // But if we initialise like the one given below we can modify individual element.
    char str[] = "King Pin";
    char *ptr5 = str;

    // BUT if normal initialisation we can not do this --> str = "Hello Ben" (i.e. we can not change the entire string)
    // but pointer can do this.

    // SUMMARY : Pointer initialisation can be used to change (not changed exactly it starts pointing to a new string) the entire string which we can not do with normal initialisation of an array to an variable like in line 15.
    return 0;
}