// 17.Write a program to display the name, age and salary of a person by using the concept of structure.

#include<stdio.h>
struct detail{
    char name[100];
    int salary;
    int age;
};
int main(){
    struct detail p;
    printf("Enter the name,salary and age of a person: ");
    scanf("%s%d%d",&p.name,&p.salary,&p.age);
    printf("Name: %s\n Salary: %d\n Age: %d",p.name,p.salary,p.age);
}