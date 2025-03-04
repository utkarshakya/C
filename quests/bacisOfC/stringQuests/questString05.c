// for question see questString.txt file.

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Namaste india";
    int size = sizeof(s1) / sizeof(s1[0]);
    int i = 0;
    char s2[size-1];
    while (i < size)
    {
        s2[i] = s1[i];
        i++;
    }
    printf("Original String : %s", s1);
    printf("\nCopied String : %s", s2);
    return 0;
}