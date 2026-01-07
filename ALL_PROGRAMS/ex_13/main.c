
// 13.Write a program to check whether the entered number is even or odd using function.

#include<stdio.h>
int checking(int x );
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    checking(num);
    return 0;
}
int checking(int x ){
    if (x%2 == 0)
        printf("The number is even.");
    

    else
        printf("The number is odd.");

    
}
