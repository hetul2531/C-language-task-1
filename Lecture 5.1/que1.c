#include <stdio.h>

int main() {
    
    int a,b,c;

    
    printf("Enter the first value = ");
    scanf("%d", &a);

    printf("Enter the second value = ");
    scanf("%d", &b);

  
    
    c=a;
    a=b;
    b=c;
    

    
    printf(" the first swapping value is %d \n", a); 
    printf(" the first swapping value is %d \n", b); 
     

    return 0;
}
