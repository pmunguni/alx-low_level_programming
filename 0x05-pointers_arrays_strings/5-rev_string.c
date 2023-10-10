#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    char *end = s;

    // Find the end of the string
    while (*end != '\0')
    {
        end++;
    }

    // Print the reversed string
    while (end > s)
    {
        end--;
        _putchar(*end);
    }
    _putchar('\n');
}
