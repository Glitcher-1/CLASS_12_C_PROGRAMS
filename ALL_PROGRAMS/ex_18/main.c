// 18.Write a program in C that stores information ( Name, Address, Age and email) of 5 students by using the concept of array of structure.

#include<stdio.h>
struct detail{
    char name[100],add[100],email[100];
};

int main(){
    struct detail st[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the name,address and email of a student no %d: ",i+1);
        scanf("%s%s%s",&st[i].name,&st[i].add,&st[i].email);
    }
    printf("STUDENTS DETAILS.....\n");
    for(i=0;i<5;i++){
        printf("%s\t%s\t%s\n",st[i].name,st[i].add,st[i].email);
    }

}