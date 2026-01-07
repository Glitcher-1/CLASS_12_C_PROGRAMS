// 6.Write a program to input age of 20 students and count the number of students having age in between 20 to 25. 

#include<stdio.h>
int main(){
    int i,n,st_age,count;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("Enter the age of student %d: ",i);
        scanf("%d",&st_age);

        if (st_age >= 20 && st_age <= 25){
            count += 1;
        }

    }
    printf("The numbber of students having age between 20 to 25 are: %d",count);
    return 0;

}