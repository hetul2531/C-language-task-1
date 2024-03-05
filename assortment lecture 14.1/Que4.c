#include <stdio.h>

 int main() {

     int row, col;
     printf("enter the number of rows :");
     scanf("%d",&row);

     printf("enter the number of columns :");
     scanf("%d",&col);

     int arr[row][col];
    
     for (int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             printf("enter the element of (%d,%d) : ",i,j);
             scanf("%d",&arr[i][j]);
         }
     }

     printf("\narrray\n");
     for (int i=0;i<row;i++)
       {
         for(int j=0;j<col;j++)
           {
             printf("%d ",arr[i][j]);
           }
         printf("\n");
       }

   int r,c;
   int sumrow=0;
   int sumcol=0;

   printf("enter the number of rows :");
   scanf("%d",&r);

   printf("enter the number of columns :");
   scanf(" %d",&c);

   for(int i=0;i<row;i++)
     {
       for(int j=0;j<col;j++)
       {
       if (j==c-1) 
       {
         sumcol+=arr[i][j];
       }
       if(i==r-1)
       {
         sumrow+=arr[i][j];
       }
       }
     }
 
   printf("rows is %d\n",sumrow); 
   printf("column is %d\n",sumcol);

     return 0;
 }