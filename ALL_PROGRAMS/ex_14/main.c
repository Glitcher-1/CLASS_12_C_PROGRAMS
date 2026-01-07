// 14.Write a program in C to calculate the sum of natural number by using recursion.


// #include<stdio.h>
// int calc_sum();
// int main(){
//     int n,sum=0,i;
//     printf("Enter the nth term for the sum of natural number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum = sum+i;
//     }
//     printf("The sum is %d",sum);
//     return 0;
// }

#include<stdio.h>
int sum_re(int x);
int main(){
    int n;
    printf("Enter the nth term for the sum: ");
    scanf("%d",&n);

    

    
    printf("The sum of natural numbers from 1 to %d is: %d",n,sum_re(n));
    
    return 0;
}

int sum_re(int x){
    if (x== 0 ){
        return 0;
    }

    else{
        return x+sum_re(x-1);

    }
}
