#include<stdio.h>
int main(){

    int a,b,min;

    printf(" Enter the value of a :");
    scanf("%d" , &a);

    printf(" Enter the value of b :");
    scanf("%d" , &b);

    if(a<b){
        min=a;

    } else{
        min=b;

    }

    printf(" The value is minimum : %d", min);

    return 0 ;



}