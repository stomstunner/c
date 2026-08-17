#include<stdio.h>
#include<string.h>
int main(){
    char username[20],password[20];
    char correctusername[] = "ujjwal";
    char correctpassword[] = "stomstunner";
    printf("Enter the Username : ");
    scanf("%s", username);
    printf("Enter the password : ");
    scanf("%s", password);
    if(strcmp(correctusername,username)== 0 && strcmp(correctpassword,password) == 0){
        printf("Welcome! %s\n", username);
    }
    else {
        printf("Error! invalid username password\n");
    }
    return 0;
}