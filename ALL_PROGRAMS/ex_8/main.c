// 8.WAP for taking n input names from user and sorting them in alphabetical order.

#include<stdio.h>
#include<string.h>
void sorting(char names[][100],int nos);
int main(){
    int nos;
    char names[100][100];
    printf("Enter the no of students: ");
    scanf("%d",&nos);

    for(int i=0;i<nos;i++){
        printf("Enter the %d person name: ",i+1);
        scanf("%s",&names[i+1]);
    }
    
    sorting(names,nos);
    printf("The names of the students in alphabetical order are....\n");
    for (int i=0;i < nos;i++){
        printf("%s\t",names[i+1]);
    }
    return 0;
}


void sorting(char names[][100],int nos){
    char temp[100];
    for (int i=0;i< nos;i++){
        for (int j=i+1;j< nos;j++){
            if(strcmp(names[i],names[j]) >0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

}
