#include "main.h"

/**
 * _islower - Entry point
 * Description: prints alphabet in lowercase
 * Return: Always 0.
 * @c: is a variable that holds the value of the character
 */
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
