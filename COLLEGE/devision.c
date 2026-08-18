#include <stdio.h>
int main()
{
    float math, english, science, hindi, computer, percentage;
    printf("Enter your score in Math : ");
    scanf("%f", &math);
    printf("Enter your score in English : ");
    scanf("%f", &english);
    printf("Enter your score in Science : ");
    scanf("%f", &science);
    printf("Enter your score in Hindi : ");
    scanf("%f", &hindi);
    printf("Enter your score in Computer : ");
    scanf("%f", &computer);
    percentage = (math + english + science + hindi + computer) / 5;
    if (percentage >= 90)
    {
        printf("Your grade is A+");
    }
    else if (percentage >= 80)
    {
        printf("Your grade is A");
    }
    else if (percentage >= 60)
    {
        printf("Your grade is B+");
    }
    else if (percentage >= 50)
    {
        printf("Your grade is B");
    }
    else if (percentage >= 40)
    {
        printf("Your grade is C+");
    }
    else if (percentage >= 33)
    {
        printf("Your grade is C");
    }
    else 
    printf("Repeat this semester");
        
    return 0;
}