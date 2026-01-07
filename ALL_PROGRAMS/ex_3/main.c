// 3.WAP in C that reads marks of five subject and calculate total marks and percentage. 
// Also award the division on the basis of following criteria. Percentage P>=75                                               
// Division  Di#stinction P>=60 and <75              
// First Division P>=45 and <60             
// Second Division P>=35 and <45              
// Third Division Otherwise                       
// Failed

#include<stdio.h>
int main(){
    int physics,chemistry,mathematics,computer,history;
    int total_marks;
    float percentage;
    printf("Marks of Physics: ");
    scanf("%d",&physics);
    printf("Marks of Chemistry: ");
    scanf("%d",&chemistry);
    printf("Marks of Mathematics: ");
    scanf("%d",&mathematics);
    printf("Marks of Computer: ");
    scanf("%d",&computer);
    printf("Marks of History: ");
    scanf("%d",&history);

    total_marks = physics+chemistry+mathematics+computer+history;
    printf("The total marks is: %d\n",total_marks);
    percentage = (total_marks/500.0)*100;
    printf("And the percentage is: %.3f\n",percentage, " percent");
    
    if (percentage>=60 && percentage<=100){
        printf("Distinction");
    }

    else if (percentage>=45 && percentage<=60){
        printf("First Division");
    }

    else if (percentage>=35 && percentage<=45){
        printf("Second Division");
    }

    else if (percentage>=30 && percentage<=35){
        printf("Third Division");
    }
    
    else {
        printf("Failed");
    }
    return 0;

}