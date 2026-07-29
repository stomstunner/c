/*
*row ke ander coloum
*row written first 
*coloum in the last
also known as matrix
*INITILAITION OF 2D ARRAY
int arr[4][2] = {{1,2},{3,4},{5,6},{7,8}}; right 4*2 = 8 elemrnts
12
34
56
78
int arr[4][2] ={1,2,3,4,5,6,7,8}; right we can write in just a 1 currly bracket
12
34
56
78
int arr[][3] = { 1,2,3,4,5,6}; riht computer autometically finds that the numbr of row will be 2 because there is 6 elemrnt a dn the colum is given is 3 
123
456

RULES FOR MATRIX MULTIPLICATION
1-> a[m][n] X b[p][q] = res[m][q]
  1st ka row   2nd ka coloumn multiplicatin isse hoga per multiplication hone ke liya 
  1st ka coloum is equal to 2nd ka row

2-> n==p // rules last and first // is this is eqal ten multiplication is done
3-> result sould me in the size of mxq
   (row of 1st) and (coloumn of 2nd)

4-> if the 2 matrix is able to multiply ... this is not means that 1 * 2 = 2*1
   a[2][1] * b[1][2] = res[2][2]
   b[1][2] * a[2][1] = res[1][1] =res[1]
*/