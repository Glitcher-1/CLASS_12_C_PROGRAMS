// 31.Write a program to display the name, age and salary of a n number of person by using the concept of array structure.


#include<stdio.h>
struct detail{
    char name[100],add[100],email[100];
};

int main(){
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct detail st[n];
    for(i=0;i<n;i++){
        printf("Enter the name,address and email of a student no %d: ",i+1);
        scanf("%s%s%s",&st[i].name,&st[i].add,&st[i].email);
    }
    printf("STUDENTS DETAILS.....\n");
    for(i=0;i<n;i++){
        printf("%s\t%s\t%s\n",st[i].name,st[i].add,st[i].email);
    }

}