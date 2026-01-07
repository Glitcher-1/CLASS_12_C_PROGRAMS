// 16.Write a program to display the Fibonacci series up-to n term using recursive function.

#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter the nth term for fibonacci series: ");
    scanf("%d",&n);
    
    
    
    printf("The fibonacci series upto %d term is :\n",n);
    for (int i=1;i<=n;i++){
        printf("%d\t",fibonacci(i));
    }

    
    return 0;
}

int fibonacci(int n){
    if(n == 1){
        return 1;
    }
    else if(n==0){
        return 0;
    }

    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
