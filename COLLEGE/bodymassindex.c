/*
The body mass index defined as the ratio of the weight of a person s ( in kilogram) to the square of the height ( in meters).
 Write a program that receives weight and height,
 calculates the BMI, and reports the BMI catogary as per the following table

BMI category        BMI
Starvation          < 15
Anorexic            15.1 to 17.5
Underweight         17.6 to 18.5
Ideal               18.6 to 24.9
Overweight          25 to 25.9
Obese               30 to 30.9
Morbidly Obese      >= 40
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float wt, ht, bmi;
    printf("Please enter height in meters and weight in kilograms : ");
    scanf("%f%f", &ht, &wt);
    bmi = wt / (ht * ht);
    printf("The BMI = %f\n", bmi);
    if (bmi < 15)
    {
        printf("BMI category: Starvation\n");
    }
   
    else if (bmi < 17.5)
    {
        printf("BMI category: Anorexic\n");
    }
   
    else if (bmi < 18.5)
    {
        printf("BMI category: Underweight\n");
    }

    else if (bmi < 25)
    {
        printf("BMI category: Ideal\n");
    }
   
    else if (bmi < 30)
    {
        printf("BMI category: Overweight\n");
    }
   
    else if (bmi < 40)
    {
        printf("BMI category: Obease\n");
    }
    
    else printf("BMI category: Morbidly Obese\n");
    return 0;
}