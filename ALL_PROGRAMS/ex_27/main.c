// 27.Wap in c to enter employee Id, name and salary of the employee and store them in A DATAFILE NAMED “EMP.TxT”. 
// DISPLAy each record on the screen.

#include<stdio.h>
int main(){
    int n,id,sal;
    char name[100];
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    FILE *fptr;
    fptr = fopen("emp.txt","w");

    for(int i=0;i<n;i++){
        printf("Enter name,id and salary of employee %d: ",i+1);
        scanf("%s%d%d",name,&id,&sal);
        fprintf(fptr,"%s\t%d\t%d\n",name,id,sal);
    }
    fclose(fptr);

    fptr = fopen("emp.txt","r");
    for(int i=0;i<n;i++){
        while(fscanf(fptr,"%s%d%d",name,&id,&sal) != EOF){
            printf("Name: %s \t Id: %d \t Salary: %d\n2",name,id,sal);
        }

    }
   
    fclose(fptr);
    return 0;

}