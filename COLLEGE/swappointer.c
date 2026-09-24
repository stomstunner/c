#include<stdio.h>
int swap(int*, int*);
int main(){
    int n,m;
    printf("Enter the 1st number : ");
    scanf("%d",&n);
    printf("Enter the 2nd number : ");
    scanf("%d",&m);
    printf("Before swaping the number : 1st = %d and 2nd = %d\n",n,m);
    swap(&n,&m);
    printf("after swaping the number : 1st = %d and 2nd = %d",n,m);

    return 0;
}
int swap(int* n, int* m){
    int temp = *n;
    *n = *m;
    *m = temp;
}