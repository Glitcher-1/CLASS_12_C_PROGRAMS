// 12.Write a program to find the greatest number among three numbers by using function.

#include<stdio.h>
int greatest(int x ,int y, int z);
int main(){
    int num1 , num2, num3;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    int gre = greatest(num1,num2,num3);
    printf("The greatest number among %d %d %d is: %d",num1,num2,num3,gre);
    return 0;
}

int greatest(int x ,int y, int z){
    if (x>y && x>z){
        return x;
    }

    else if (y>x && y>z){
        return y;
    }

    else{
        return z;
    }
}

