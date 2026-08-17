#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : \n");
    scanf("%c", &ch);
    if (ch <= 90 && ch >= 65)
    {
        printf("This is a capital letter\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("This ia small letter\n");
    }
    else if (ch <= 57 && ch >= 48)
    {
        printf("This is a number\n");
    }
    else
    {
        printf("This is a spacial character\n");
    }
    return 0;
}