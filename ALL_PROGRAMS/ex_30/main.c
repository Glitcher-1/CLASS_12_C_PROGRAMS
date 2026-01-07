// 30.Write a program to display the Fibonacci series up-to n term using recursive function taking first term 5 and second term 6.

#include<stdio.h>
int fibonacci(int term);
void main(){
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series.....");
    for(i=1;i<=n;i++){
        printf("%d\t",fibonacci(i));
    }

}

int fibonacci(int term){
        if(term == 1){
            return 5;
        }

        else if (term == 2){
            return 6;
        }

        else{
            return fibonacci(term-1)+fibonacci(term-2);
    }
}
