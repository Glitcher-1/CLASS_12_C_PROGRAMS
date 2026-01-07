// 28.Wap in c to enter employee Id, name and salary of the employee and store them in A DATAFILE NAMED “EMP.TxT”. 
// DISPLAy each record on the screen by using concept of structure.

#include<stdio.h>
struct detail{
    char name[100];
    int id,sal;
};

int main(){
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    struct detail emp;

    FILE *fptr;
    fptr = fopen("emp.txt","w");

    for(i=0;i<n;i++){
        printf("Enter the name , id and salary of employee %d: ",i+1);
        scanf("%s%d%d",emp.name,&emp.id,&emp.sal);
        fprintf(fptr,"%s\t%d\t%d\n",emp.name,emp.id,emp.sal);

    }
    fclose(fptr);

    fptr = fopen("emp.txt","r");
    for(i=0;i<n;i++){
        while(fscanf(fptr,"%s%d%d",emp.name,&emp.id,&emp.sal) != EOF){
            printf("Name: %s \t Id: %d \t Salary: %d\n",emp.name,emp.id,emp.sal);
        }
    }

    fclose(fptr);
    return 0;
}