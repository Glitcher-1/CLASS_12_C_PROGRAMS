// 24.wAP TO CREATE A DATAFILE “STUDENT.TxT” and store name age and class of n numbers of student.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    char name[100];
    int age,class;

    FILE *fptr;
    fptr = fopen("student.txt","w");
    for(i=0;i<n;i++){
        printf("Enter name, age and class of student no %d: ",i+1);
        scanf("%s%d%d",name,&age,&class);
        fprintf(fptr,"Name: %s \t Age: %d \t Class: %d\n",name,age,class);

    }
    
    
    fclose(fptr);
    printf("The given details of the studetns are stored in the student.txt.");
    return 0;
}