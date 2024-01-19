#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
char *end = s;

while (*end != '\0')
{
end++;
}

while (end > s)
{
end--;
_putchar(*end);
}
_putchar('\n');
}
