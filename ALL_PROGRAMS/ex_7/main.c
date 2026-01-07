// 7.WAP to input n numbers and sort them in ascending order and descending order.

#include<stdio.h>
int sortAscending(int arr[],int n);
int sortDescending(int arr[],int n);
int main(){
    int n;
    printf("Enter the how many numeber you wnat to give: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=1;i<=n;i++){
        printf("Enter the %d number:",i);
        scanf("%d",&arr[i]);
    }
    
    sortAscending(arr,n);
    printf("ASCENDING ORDER....\n");
    for(int i=1;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    sortDescending(arr,n);
    printf("DESCENDING ORDER....\n");
    for(int i=1;i<=n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

int sortAscending(int arr[],int n){
    int temp;
    for (int i=1;i<=n-1;i++){
        for (int j=i+1;j<=n;j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int sortDescending(int arr[],int n){
    int temp;
    for (int i=1;i<=n-1;i++){
        for (int j=i+1;j<=n;j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
