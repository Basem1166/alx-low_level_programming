#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    unsigned int prev = 1;
    unsigned int current = 2;

    printf("%u, %u", prev, current); // Print the first two Fibonacci numbers

    for (count = 3; count <= 98; count++)
    {
        unsigned int next = prev + current;

        printf(", %u", next);

        prev = current;
        current = next;
    }

    printf("\n");

    return (0);
}

