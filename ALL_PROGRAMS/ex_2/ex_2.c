#include <stdio.h>

int main() {
    int wage, old;
    char name[100];  // Allocate space for the string

    printf("Enter the name of the person: ");
    scanf("%s", &name);  // no & needed for arrays

    printf("Enter the Salary of the person: ");
    scanf("%d", &wage);

    printf("Enter the Age of the person: ");
    scanf("%d", &old);

    printf("\n--------------------Record of the Person---------------------\n");
    printf("The name of the person is: %s\n", name);
    printf("The Salary of the person is: %d\n", wage);
    printf("The Age of the person is: %d\n", old);

    return 0;
}
