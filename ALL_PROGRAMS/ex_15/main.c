// 15.Write a program to calculate factorial of a number. Or product of natural number by using function.

#include<stdio.h>
int factorial(int x);
int main(){
    int n,fact=1;
    printf("Enter nth term for the factorial: ");
    scanf("%d",&n);
    
    if (n < 0){
        printf("It is impossible to find the factorial for negative numbers.");
    }

    else{
        printf("The factorial upto %d is : %d",n,factorial(n));
    }
    return 0;
}

int factorial(int x){
    if (x == 0){
        return 1;
    }

    else{
        return x*factorial(x-1);
        // for (int i=1;i<=x;i++){
        //     return fact*i;
    }
}
