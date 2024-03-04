#include <stdio.h>

int main() {
    int number, count = 0;


    printf("Enter any number: ");
    scanf("%d", &number);

    
    do {
        number /= 10;
        count++;
    } while (number != 0);

    
    printf("Total numbr of digits: %d\n", count);

    return 0;
}

