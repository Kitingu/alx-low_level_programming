#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase except q and e
 * Return: always return (0) (success)
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'q')
continue;
else if (alph == 'e')
continue;
putchar (alph);
}
putchar('\n');
return (0);
}
