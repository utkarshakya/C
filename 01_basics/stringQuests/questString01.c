// for question see questString.txt file.

#include <stdio.h>
int main()
{
    // String is an character array.
    // ASCII Values:
    // 'A' --> 65
    // 'a' --> 97
    // '0' --> 48
    // '\0' --> 0 (Null Character)

    char arr[3] = {'R', 'A', 'M'}; // here null character is not present at the end. 
    char brr[] = "Namaste India";  // here null character is present at the end. its size is noticeable.

    int i = 0;
    while(brr[i] != '\0'){
        printf("%c", brr[i]);
        i++;
    }

    // NOTE : printing arr[i], i[arr], *(arr+i) and *(i+arr) are all give same output.

    return 0;
}