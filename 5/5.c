#include <stdio.h>

int main() {

    int number, i, sum = 0;

    printf("Please enter a number \n");
    scanf("%d", &number);

    for(i =1; i <= number; i++)
    {
        if((i % 3 ==0) || (i % 5 ==0))
        {
            sum = sum + i;
        }
    }
    printf("Sum of numbers = %d", sum);
    return 0;
}