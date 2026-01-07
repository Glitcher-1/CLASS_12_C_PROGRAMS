// 11.WRITE A PROGRAM IN C THAT CAN CALCULATE AND DISPLAY THE SIMPLE INTREST BASED ON THE USER’S INPUT FOR PRINCIPAL, TIME AND RATE using user defined FUNCTION.

#include<stdio.h>
float S_I(float x,float y, float z);
int main(){
    float SI,P,T,R;
    printf("Enter the Principal: ");
    scanf("%f",&P);
    printf("Enter the Time in Year: ");
    scanf("%f",&T);
    printf("Enter the Rate of interest: ");
    scanf("%f",&R);
    SI = S_I(P,T,R);
    printf("The simple interest is %.2f",SI);
    return 0;
}

float S_I(float x,float y, float z){
    return (x*y*z)/100.0;
}
