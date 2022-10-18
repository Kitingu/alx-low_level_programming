#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: prints alphabet in lowercase
 * Return: void.
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
