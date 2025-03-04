// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon
    {
        char name[30];
        int hp;
        int attack;
        int defence;
        char tier;
    } pokemon;

    int n; // For Total No Of Pokemons.
    printf("How Many Pokemons Do You Have : ");
    scanf("%d", &n);

    // Initial Check
    if (n < 1)
    {
        if (n == 0)
        {
            printf("Ohh! Catch Pokemons First Then Come To Store Their Data.");
            return 0;
        }
        else
        {
            printf("INVALID INPUT!, Please Enter A Valid One.");
            return 0;
        }
    }

    pokemon arr[n]; // This Will Create A Array Of Pokemon Data Type With Size n.
    // Now We Can Easily Take Inputs.
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        char str[30];
        printf("Enter the name of the Pokemon No. %d : ", i + 1);
        scanf("%s", &str);
        strcpy(arr[i].name, str);
        printf("Enter His/Her Tier : ");
        scanf("%s", &arr[i].tier);
        printf("Enter His/Her H.P. : ");
        scanf("%d", &arr[i].hp);
        printf("Enter His/Her Attack : ");
        scanf("%d", &arr[i].attack);
        printf("Enter His/Her Defence ");
        scanf("%d", &arr[i].defence);
    }

    for (int j = 0; j < n; j++)
    {
        printf("\n");
        printf("Name Of The Pokemon No. %d = %s\n", j+1, arr[j].name);
        printf("His/Her H.P. = %d\n", arr[j].hp);
        printf("His/Her Attack = %d\n", arr[j].attack);
        printf("His/Her Defence = %d\n", arr[j].defence);
        printf("His/Her Tier = %c\n", arr[j].tier);
    }

    return 0;
}