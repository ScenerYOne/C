#include<stdio.h>
int main (){
    int score,grade;
    printf("Enter your grade:");
    scanf("%d", &score);
        if(score < 50)
            grade = "F";
        else if(score >= 50 && score < 60)
            grade = "D";
        else if(score >= 60 && score < 70)
            grade = "C";
        else if(score >= 70 && score < 80)
            grade = "B";
        else
            grade = "A";
        printf("The grade is: %s", grade);
        return 0;
    }
