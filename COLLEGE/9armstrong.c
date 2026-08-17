// #include<stdio.h>
// int power(int base, int power){
//     int result = 1;
//     for(int i=1;i<=power;i++){
//         result = result * base;
//     }
//     return result;
// }
// int main(){
//     int num,originalnum,result =0,n=0,remainder;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     originalnum = num;
//     while(originalnum != 0){
//         originalnum = originalnum /10;
//         ++n;
//     }
//     originalnum = num;
//     while (originalnum != 0){
//         remainder = originalnum % 10;
//         result = result + power(remainder,n);
//       originalnum /= 10;
//     }
//     if(result == num){
//         printf("This is a armstrong number\n");
//     }
//     else printf("This is not a armstrong number\n");
//     return 0;
// }
#include<stdio.h>
int power(int base, int power){
    int result = 1;
    for(int i=1;i<=power;i++){
        result = result * base;
    }
     return result;
}
int main(){
    int num, originalnum, result =0, n=0,remainder;
    printf("Enter the number : ");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum != 0){
        originalnum = originalnum /10;
        ++n;
    }
    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result = result + power(remainder,n);
        originalnum = originalnum / 10;
    }
    if(result == num){
        printf("This is a armstrong number\n");
    }
    else {
        printf("This is not a armstrong number\n");
    }
    return 0;
}