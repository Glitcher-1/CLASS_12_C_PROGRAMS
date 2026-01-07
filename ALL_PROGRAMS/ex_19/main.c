// 19.Write a program that reads names and address of different students and rearrange them on the basis of name in alphabetical order.

#include<stdio.h>
#include<string.h>
struct detail{
    char name[100],add[100];
};

int main(){
    int i,j,n;
    struct detail temp;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct detail st[n];
    for(i=0;i<n;i++){
        printf("Name and address of a student %d:",i+1);
        scanf("%s%s",st[i].name,st[i].add);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if( strcmp(st[i].name , st[j].name) > 0 ){
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%s\t%s\n",st[i].name,st[i].add);
    }

    return 0;

}
