// WAP IN C TO INPUT ANY TWO NUMBERS AND FIND THE SUM , SUBTRACTION , MULTIPLICATION AND DIVISION OF THAT NUMBERS.

#include <stdio.h>
int subtraction(int a, int b);
int addition(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int main()
{
    int a, b, sub, add, mult, div;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    sub = subtraction(a,b);
    add = addition(a,b);
    mult= multiplication(a,b);
    div = division(a,b);

    printf("The sum of the numbers is: %d \n",add);
    printf("The subtraction of the numbers is: %d \n",sub);
    printf("The multiplication of the numbers is: %d \n",mult);
    printf("The division of the numbers is: %d \n",div);
    return 0;

}

int subtraction(int a, int b){
    return a-b;
}
int addition(int a, int b){
    return a+b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}

