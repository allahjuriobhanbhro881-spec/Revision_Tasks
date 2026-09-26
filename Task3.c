#include <stdio.h>

int main(){
    
    // The Exam Grade Slip:
    int marks;

    printf("enter marks: ");
    scanf(" %d", &marks);

    if(marks < 0 || marks > 100){
        printf("invalid marks: ");
        printf("stopped");
    }
    else{
        if(marks >= 90 && marks <= 100){
           printf("A+\n");
           printf("Pass\n");
        }
        else if(marks >= 80 && marks < 89){
           printf("A\n");
           printf("Pass\n");
        }
        else if(marks >= 70 && marks < 79){
           printf("B\n");
           printf("Pass\n");
        }
        else if(marks >= 60 && marks < 69){
           printf("C\n");
           printf("Pass\n");
        }
        else if(marks >= 50 && marks < 59){
           printf("D\n");
           printf("Pass\n");
        }
        else{
           printf("F\n");
           printf("Fail\n");
        }
    }

    

    return 0;
}