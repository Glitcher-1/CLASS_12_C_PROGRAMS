// 5.WAP to check the given number is palindrome or not.
#include<stdio.h>
int main(){
    int num,rev=0,rem;

    printf("Enter ther number : ");
    scanf("%d",&num);
    int original = num;
    while (num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev){
        printf("The number %d is palindrom.",rev);
    }

    else{
        printf("The number %d is not a palindrome.",original);
    }

    return 0;
}