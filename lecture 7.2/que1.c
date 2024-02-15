#include <stdio.h>

int main() {

    float num1, num2, num3;

    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    
    float min_num;

    if (num1 <= num2) {
        if (num1 <= num3) {
            min_num = num1;
        } else {
            min_num = num3;
        }
    } else {
        if (num2 <= num3) {
            min_num = num2;
        } else {
            min_num = num3;
        }
    }

    
    printf("The minimum value is: %.2f\n", min_num);

    return 0;
}
