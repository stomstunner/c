#include <stdio.h>
void england()
{                                    // england yaha hai
    printf("You are in England \n"); // 6
    return;                          // 7
}
void australia()
{                                     // australia yaha hai
    printf("You are in australia\n"); // 4
    england();                        // calling england //5
    return;                           // 8
}
void india()
{                                 // yaha hai india
    printf("You are in india\n"); // 2
    australia();                  // calling australia// 3
    return;                       /// 9
}
int main()
{
    india();  // calling india  //line sabse pahale yaha aayega (1,,,)
    return 0; // 10
}