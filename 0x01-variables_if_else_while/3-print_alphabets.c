#include <stdio.h>
/**
 * main - Entry point
 * Description: prints aplhabet in lowercase and uppercase
 * Return: always return (0) (success)
 */
int main(void)
{
char upper_case;
char lower_case;
for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar (lower_case);
}
for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar (upper_case);
}
putchar('\n');
return (0);
}
