// for question see questStructure.txt file.

#include <stdio.h>
#include <string.h>

typedef struct class
{
    int noOfSteats;
    int noOfFans;
    int noOfLEDs;
} class;

typedef struct school
{
    int noOfClasses;
    int noOfTeachers;
    int noOfStudents;
    class c; // This is a nesting of class structure in school structure.
} school;

// These are some function definitions.
void display(school schoolData);
void change(school newData);

int main()
{

    // Veriable Creation
    school subhashVidya;
    class firstClass;

    // Inserting Data
    subhashVidya.noOfClasses = 15;
    subhashVidya.noOfStudents = 4000;
    subhashVidya.noOfTeachers = 50;
    subhashVidya.c.noOfSteats = 69;
    subhashVidya.c.noOfFans = 6;
    subhashVidya.c.noOfLEDs = 8;

    // Calling A Display Function For Simple Output.
    display(subhashVidya);

    // Calling Change To Make Changes In The Structure.
    change(subhashVidya);

    // Printing Again To Understand That Structures Are Passed By Values.
    printf("Total No Classes In Subhashs Vidya School : %d\n", subhashVidya.noOfClasses);
    printf("Total No Of Student In Subhashs Vidya School : %d\n", subhashVidya.noOfStudents);
    printf("Total No Of Teachers In Subhashs Vidya School : %d\n", subhashVidya.noOfTeachers);

    return 0;
}

void display(school schoolData){
    printf("Total No Classes In Subhashs Vidya School : %d\n", schoolData.noOfClasses);
    printf("Total No Of Student In Subhashs Vidya School : %d\n", schoolData.noOfStudents);
    printf("Total No Of Teachers In Subhashs Vidya School : %d\n", schoolData.noOfTeachers);
    printf("\n");

}

void change(school newData){
    newData.noOfClasses = 10;
    newData.noOfStudents = 2999;
    newData.noOfTeachers = 30;
    // Again Calling Display After Making Changes.
    display(newData);
}

// NOW IF YOU RUN THIS CODE YOU WILL SEE THAT THE DATA IN subhashVidya STRUCTURE IS NOT CHANGED SO WE CAN SAY NOT THAT IF WE DIRECTLY PASS STRUCTURES TO A FUNCTION THEIR VALUES GOES NOT THRIR REFERENCES. WE CAN PASS BY REFERENCE USING POINTERS.
// NOTE : IN ARRAYS THE REFERENCE GOES IF WE DIRECTLY PASS THEM TO A FUNCTION.