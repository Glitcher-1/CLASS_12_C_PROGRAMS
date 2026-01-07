// 29.Same program by using w+ mode...(question 28)

#include<stdio.h>
struct detail{
    char name[100];
    int id,sal;
};

int main(){
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    struct detail emp[n];

    FILE *fptr;
    fptr = fopen("emp.txt","w+");

    for(i=0;i<n;i++){
        printf("Enter the name , id and salary of employee %d: ",i+1);
        scanf("%s%d%d",emp[i].name,&emp[i].id,&emp[i].sal);
        fprintf(fptr,"%s\t%d\t%d\n",emp[i].name,emp[i].id,emp[i].sal);

    }
    
    rewind(fptr);
    for(i=0;i<n;i++){
        while(fscanf(fptr,"%s%d%d",emp[i].name,&emp[i].id,&emp[i].sal) != EOF){
            printf("Name: %s \t Id: %d \t Salary: %d\n",emp[i].name,emp[i].id,emp[i].sal);
        }
    }

    fclose(fptr);
    return 0;
}