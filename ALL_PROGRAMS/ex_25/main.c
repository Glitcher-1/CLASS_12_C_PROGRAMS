// 25.A DATAFILE “STUDENT.TxT” CONTAIN NAME, class and marks obtained in 3 different subject of few students. 
// Write a c program TO ADD MORE RECORDS UNTIL USER PRESS “y” AS per user requirements.

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char name[100];
    int physics, chemistry ,math;
    char choice[3];
    
    FILE *fptr;
    fptr = fopen("student.txt","a");
    do{
        printf("Enter the name and marks of student in Physics , Chemistry and Maths: ");
        scanf("%s%d%d%d",name,&physics,&chemistry,&math);
        fprintf(fptr,"Name: %s\tPhysics: %d\tChemistry: %d\t Mathe: %d\n",name,physics,chemistry,math);
        printf("You want to countinue(y/n): ");
        scanf("%s",choice);
    }while(strcmp(choice,"y") == 0 || strcmp(choice,"Y") == 0);
    fclose(fptr);
    return 0;
}