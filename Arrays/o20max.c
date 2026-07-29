#include<stdio.h>
int main(){
    int n;  //3
    printf("Enter size of your element : ");
    scanf("%d",&n);
    int arr[n];  
    for(int i=0;i<=n-1;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);//{12,78,90}
    }
    int max=-1;  // sabse chhota number ko lenge  // works only for positive number 
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){   // if statement me jo hamare sabse chote number ko array ke element se
        //  compare karenge aur jo bara hoga usse max me store kar lenge fir se loop me jo
        //   max ka value hoga usse array ke elemnt ko compare karenge
            max= arr[i];
        }
    }
        printf("%d",max);
    return 0;
}