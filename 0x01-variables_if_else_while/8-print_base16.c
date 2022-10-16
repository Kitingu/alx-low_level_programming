#include<stdio.h>
/**
 * main - Entry point
 * Description: Prints all numbers of base 16
 *  in lower case followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
char base16;

for (base16 = 48 ; base16 <= 57; base16++)
{
putchar(base16);
}
for (base16 = 97 ; base16 <= 102; base16++)
{
putchar(base16);
}
putchar ('\n');
return (0);
}
