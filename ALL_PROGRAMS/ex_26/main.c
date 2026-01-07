// 26.Wap in c to enter employee Id, name and post of the employee and store them in A DATAFILE NAMED “EMP.TxT”. 
// DISPLAy each record on the screen.

#include<stdio.h>
int main(){
    char name[100],post[100];
    int emid;
    int i,n;

    printf("Enter the number of Employee: ");
    scanf("%d",&n);

    FILE *detail;
    detail = fopen("emp.txt","w");

    for(i=0;i<n;i++){
        printf("Enter the name ,post and emp id of the employee no %d:  ",i+1);
        scanf("%s%s%d",name,post,&emid); 
        fprintf(detail,"%s %s %d",name,post,emid);

    }
    fclose(detail);

    detail = fopen("emp.txt","r");
    while(fscanf(detail,"%s%s%d",name,post,&emid) != EOF){
        printf("Name: %s\t Post: %s\t Emp id: %d\n",name,post,emid);
    }
    fclose(detail);

    return 0;
}