/*
1) main() ek hi baar aata hai 
2) program starts with main function
3)unlimited function


***LIBRARY FUNCTION
1. printf("hello"),,,printf function
2. scanf function
3. sqrt (49)  ,, square function 
4. pow ,, power eg..pow(2,5)=2 ki power 5
combination and permutation
n
 C    = n!/r!*(n-r)!
   r  

 ***SCOPE of variable is like the aukat the vaqriable or limit
//       main(){

//          //i is not has acces to outsite the for loop
//            for (int i=1)
//            //i is not has acces to outsite the for loop
//      }

***FORMAL PARAMETER AND THE ACTUAL PARAMETER 
  void swap(int a,int b){
   
   int temp=a;
   a=b;
   b=temp;
   return;
   }

   
   int main(){
   a=2;
   b=9;
   swap(a,b);       // a AND  b ARE THE FORMAL PARA METER AND THEIR VALUE (2,9) ARE THE ACTUL PARAMETER 
   }


   ***POINTER
   Variable ka address store

   let 
   int a =5;   a ke dabba me 5 and a ka address let say 5x204  ,, 
   int* x = &a  ... pointer locator variable that store the address of a

   // x ke dabbe me 5x204 and let us say the address  of the x is 6y5z2
  
  printf("%p",x) == 5x204
  printf("%p",&x)  == 6y5z2
  printf("%d",*x)  ==  5
  * x ka matlab hota hai x ke ander jis  bhi variable ka address store hai  uss variable  ko popint karo uske ander jo para  value hai usko utha ke laao
    
    pointer ki help se ham kisi address pe pari hui chiz ki value ko chang kar sakte hai


    SWAP THE VALUE 

    
   let 
   int a =5;  
   int* x = &a;
   *x = 7 ;  // pointer ki help se ham a ki value change kar sakte  hai  //
    *x signify the pointers 
    then we can change the value of the a by locating their their the address and chnage the value of that variable 

*** it is the way of pass by refrence
with the help of pointers we can acctully change  the value of the variable  whose address store in the  pointer itself

