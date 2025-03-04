// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>

typedef struct cricketer
{
    char name[20];
    int age;
    int noOfTestMatches;
    float averageRun;
} crk;

void readRecord(int noOfCricketers, crk arr[]);

int main()
{
    int noOfCricketers;
    printf("\nHello! Nice To Have You Here Today.\nCan You Tell Me How Many Cricketers Data You Want To Insert : ");
    scanf("%d", &noOfCricketers);
    getchar(); // Consume the newline character left in the input buffer

    crk arr[noOfCricketers];
    readRecord(noOfCricketers, arr);

    // Printing The Inserted Data
    printf("\nThese Are Your Entered Data : ");
    printf("\n- - - - - - - - - - - - - - -");
    for (int i = 0; i < noOfCricketers; i++)
    {
        printf("\n\n");
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Total Matches Played: %d\n", arr[i].noOfTestMatches);
        printf("Average Runs: %f\n", arr[i].averageRun);
    }
    printf("\n");
    return 0;
}

void readRecord(int noOfCricketers, crk arr[])
{
    for (int i = 0; i < noOfCricketers; i++)
    {
        printf("\n");
        printf("Enter the Data of Cricketer No. %d\n", i + 1);
        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0'; // Remove the newline character
        printf("Age: ");
        scanf("%d", &arr[i].age);
        printf("Total Matches Played: ");
        scanf("%d", &arr[i].noOfTestMatches);
        printf("Average Runs: ");
        scanf("%f", &arr[i].averageRun);
        getchar(); // Consume the newline character left in the input buffer
    }
}
