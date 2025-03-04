#include <stdio.h>
#include <string.h>
int main(){
    // Uncomment multiline comments to see all code.


    // 1. Using strlen() function.
    char lstr[] = "Hello My Name Is Ben Tenison";
    int length = strlen(lstr);
    printf("Length of the given string = %d", length);
    // NOTE: strlen() function gives the apperaring length of the string not the actual one. It exclude null character.


/*
    // 2. Using strcpy() function.
    char c1str[] = "Hello";
    char c2str[sizeof(c1str)/sizeof(c1str[0])];
    strcpy(c2str, c1str);
    printf("\nCopied String = %s", c2str);
    // NOTE: strcpy() function create a deep copy not a shallow copy.
*/

/*
    // 3. Using strcat() function.
    char con1str[] = "Hola King is bling";
    char con2str[] = "Amigo Is The Song";
    strcat(con1str, con2str);
    printf("%s", con1str);
*/
}