// for qusetion see questString.txt file.

#include <stdio.h>
#include <stdio.h>
int main()
{
    // Taking Input Of String.
    char str[100];
    printf("Write a Word OR Sentence Containing Not More Than 10 Words : ");
    gets(str);

    // Reverseing A String After Calculating Its Size.
    int size = 0, i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }

    for (int m = 0, n = size - 1; m < n; m++, n--)
    {
        int temp = str[m];
        str[m] = str[n];
        str[n] = temp;
    }

    // Printing The Output.
    printf("Reverse Of Your String : ");
    puts(str);

    return 0;
}