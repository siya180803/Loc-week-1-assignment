#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        digit = num % 10;   // get the last digit
        sum += digit;       // add the last digit to the sum
        num /= 10;          // remove the last digit from the number
    } while (num != 0);

    printf("The sum of digits is %d.\n", sum);

    return 0;
}
