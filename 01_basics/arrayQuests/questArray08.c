// for qustion see questArray.txt file.

#include <stdio.h>
int main()
{
    int noOfStudents, rollNo, physicsMarks, mathsMarks, csMarks;
    printf("Enter the value of total no of students : ");
    scanf("%d", &noOfStudents);
    int matrix[noOfStudents][4];
    for (int i = 0; i < noOfStudents; i++)
    {
        printf("Student %d Enter Your Roll No. : ", i + 1);
        scanf("%d", &rollNo);
        printf("Student %d Enter Your Physics Marks : ", i + 1);
        scanf("%d", &physicsMarks);
        printf("Student %d Enter Your Maths Marks : ", i + 1);
        scanf("%d", &mathsMarks);
        printf("Student %d Enter Your CS Marks : ", i + 1);
        scanf("%d", &csMarks);
        printf("----- ----- -----\n"); // for seperation

        // Adding values to matrix
        matrix[i][0] = rollNo;
        matrix[i][1] = physicsMarks;
        matrix[i][2] = mathsMarks;
        matrix[i][3] = csMarks;
    }
    printf("\nRollNo.\t\tPhysics\t\tMaths\t\tComputerScience\n\n");
    for (int j = 0; j < noOfStudents; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("%d\t\t", matrix[j][k]);
        }
        printf("\n\n");
    }
    return 0;
}