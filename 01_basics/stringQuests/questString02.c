// for qusetion see questString.txt file.

// puts() and gets() functions.
#include <stdio.h>
#include <string.h>
int main(){
    // scanf() can not take inputs of sentance because it stops when space is entered
    // that's why we use gets().
    // we can %s after including string.h with printf(), it will print whole string.
    // there is no need to terminate it at \0 character since we don't use %c.
    // we can use scanf("%[^\n]s", str) to take input of an santance.

    char str[50];
    printf("Enter A Sentence : ");
    gets(str);
    printf("Your Entered Sentence : %s", str);
    // puts() function have a \n at the end but printf don't.
    return 0;
}