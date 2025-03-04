// for question see questRecursion.txt file.

#include <stdio.h>
void towerOfHanoi(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    towerOfHanoi(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    towerOfHanoi(n - 1, h, s, d);
    return;
}
int main()
{
    int n;
    printf("Enter the no. of disks : ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}