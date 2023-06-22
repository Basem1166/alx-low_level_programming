#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long long int limit = 4000000;
    unsigned long long int prev = 1;
    unsigned long long int current = 2;
    unsigned long long int sum = 0;
    unsigned long long int temp;

    while (current <= limit)
    {
        if (current % 2 == 0)
            sum += current;

        temp = current;
        current += prev;
        prev = temp;
    }

    printf("%llu\n", sum);

    return (0);
}

