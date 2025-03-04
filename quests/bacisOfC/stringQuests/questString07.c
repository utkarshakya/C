// for question see questString.c file.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[34];
    char str[] = "YOU NICE"; // we can also input string from user using gets()
    printf("\nThis Is The Given String : %s\n\n", str);
    
    char ch;
    printf("Enter The Character To Be Inserted : ");
    scanf(" %c", &ch);

    int n;
    printf("Enter The Position Where You Want To Insert It : ");
    scanf("%d", &n);

    int i = sizeof(str) / sizeof(str[0]);
    for (int j = i; j >= n - 1; j--)
    {
        str[j + 1] = str[j];
    }

    str[n - 1] = ch;
    printf("\nThis Is The New String : %s", str);
    return 0;
}