#include<stdio.h>
int main(){
    char correct_username[] = {'u','j','j','w','a','l','\0'} ;
    char correct_password[] = {'p','a','s','s','w','o','r','d','\0'};
    char entered_username [20];
    char entered_password [20];
    printf("Enter the username : ");
    scanf("%s",entered_username);
    printf("Enter the password : ");
    scanf("%s",entered_password);
   if((correct_username == entered_username) == 0 && (correct_password == entered_password) == 0 ){
    printf("The login is successfull");
   }
   else {
    printf("Tata bye bye");
   }
    return 0;
}