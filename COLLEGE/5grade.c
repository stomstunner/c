#include<stdio.h>
int main(){
    float marks[5],percentage, total = 0.0;
    char grade;
    printf("Enter marks of five subjects : \n");
    for(int i=0;i<5;i++){ 
        printf("Subjects : %d\n",i+1);
        scanf("%f",&marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;
    if(percentage >= 60){
        grade = 'A';
    }
    else if (percentage >= 50){
        grade = 'B';
    }
    else if ( percentage >= 40){
        grade = 'C';
    }
    else  {
        printf("Fail");
        return 0;
    }
    printf("Total marks of the Student = %.2f\n",total);
    printf("Percentage of the student = %.2f%%\n",percentage);
    printf("Grade = %c\n",grade);
    return 0;
}