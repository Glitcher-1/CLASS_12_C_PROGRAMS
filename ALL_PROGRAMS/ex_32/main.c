// 32.Wap in c to enter employee Id, name and salary of the employee and store them in A DATAFILE NAMED “EMP.TxT”. 
// DISPLAy each record on the screen on the basis of name(ascending order) by using concept of structure.

#include<stdio.h>
#include<string.h>

struct detail{
    char name[100];
    int id,salary;
};

int main(){
    int n,i,j;
    printf("Enter the number of employee: ");
    scanf("%d",&n);

    struct detail emp[n],temp;
    FILE *file;
    file = fopen("emp.txt","w+");
    for(i=0;i<n;i++){
        printf("Enter name id and salary of employee %d: ",i+1);
        scanf("%s%d%d",emp[i].name,&emp[i].id,&emp[i].salary);

    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(emp[i].name,emp[j].name) > 0){
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
             }
        }
    }
    
    for(i=0;i<n;i++){
        fprintf(file,"%s\t%d\t%d\n",emp[i].name,emp[i].id,emp[i].salary);
    }

    // for(i=0;i<n;i++){
    //     fprintf(file,"%s\t%d\t%d\n",temp.name,temp.id,temp.salary);
    // }

    
    rewind(file);

   for(i=0;i<n;i++){
        while(fscanf(file,"%s%d%d",emp[i].name,&emp[i].id,&emp[i].salary) != EOF){
            printf("Name:%s\tId:%d\tSalary:%d\n",emp[i].name,emp[i].id,emp[i].salary);
        }
   }

    fclose(file);
    return 0;
}