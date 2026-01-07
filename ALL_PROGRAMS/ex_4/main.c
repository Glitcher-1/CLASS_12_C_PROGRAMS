// 4.Write a program to display the following Fibonacci series 5 6 11 17 28 ...  Up-to Nth term.
#include<stdio.h>
int main(){
    printf("----------------FIBONACCI SERIES-----------------\n");
    int num1 = 5, num2 = 6, num3,n,i;
   
    printf("Enter the nth term: ");
    scanf("%d",&n);

    printf("%d\n",num1);
    // printf("\n");
    printf("%d\n",num2);
    // printf("\n");
    
    for (i=3;i<=n;i++){
        num3 = num1+num2;
        printf("%d\n",num3);
        // printf("\n");
        num1 = num2;
        num2 = num3;
    }
    // i = 3;
    // while (i<=n){
    //     num3 = num1+num2;
    //     printf("%d",num3);
    //     printf("\n");
    //     num1 = num2;
    //     num2 = num3;
    //     i++ ;
    // }
    return 0;
}

