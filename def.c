#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *def - default
 *@str: format
 *@i: num
 *
 *Return: void
 */
void def(const char *str, int i)
{
write(1, str-1, 2);
i++;
}
