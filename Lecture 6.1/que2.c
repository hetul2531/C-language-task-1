#include<stdio.h>

int main(){
    int Bs,HRA,DA,TA;

    printf("Enter the value of Base salary :");
    scanf("%d" , &Bs);

    
    printf("Enter the value of HRA :");
    scanf("%d" , &HRA);

    
    printf("Enter the value of DA :");
    scanf("%d" , &DA);

    
    printf("Enter the value of TA :");
    scanf("%d" , &TA);

    printf(" Total gross salary is : %d" , Bs+HRA+DA+TA );

    return 0;
    
}