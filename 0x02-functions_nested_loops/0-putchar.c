#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
