#include <stdio.h>

int main () {
    int number, sum;

    printf("please enter any number \n");
    scanf("%d", &number);

    for(int i = 1; i <= number; ++i)
    {
        sum += i;
    }

    printf("Sum of numbers = %d", sum);
    return 0;
}