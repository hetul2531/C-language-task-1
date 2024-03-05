#include<stdio.h>
int main (){
int row, col;

 printf("Enter the number of rows :");
 scanf("%d", &row);
 
 printf("Enter the number of colums :");
 scanf("%d", &col);
 
 int arry[row][col];
 
 for(int i=0; i<row; i++)
 {
     for(int  j=0; j<col; j++)
     {
         printf("Enter the element of 2D array :");
         scanf("%d",&arry[i][j]);
         
     }
 }
  printf("\noriginal matrix\n");
  for(int i=0; i<row; i++)
 {
     for(int  j=0; j<col; j++)
     {
        
         printf("%d ",arry[i][j]);
         
     }
     printf("\n");
 }
 printf("transpose matrix : \n");
 for(int i=0; i<col; i++)
 {
     for(int  j=0; j<row; j++)
     {
        
         printf("%d ",arry[j][i]);
         
     }
     printf("\n");
 }
 
  
 return 0;
}