#include <stdio.h>

int main() {
    
    float num1, num2, num3, num4;

    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    printf("Enter the fourth number: ");
    scanf("%f", &num4);

    
    float max_num;

    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                max_num = num1;
            } else {
                max_num = num4;
            }
        } else {
            if (num3 >= num4) {
                max_num = num3;
            } else {
                max_num = num4;
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                max_num = num2;
            } else {
                max_num = num4;
            }
        } else {
            if (num3 >= num4) {
                max_num = num3;
            } else {
                max_num = num4;
            }
        }
    }

    
    printf("The maximum value is: %.2f\n", max_num);

    return 0;
}
