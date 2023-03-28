#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *case_s -print for %s specifier
 *@str: string variab;le
 *@i: num count
 *
 *Return: void
 */
void case_s(const char *str, int i)
{
const char *chr = str;
if (chr == NULL)
return;
i = i - 1;
while (*chr)
{
write(1, chr, 1);
i++;
chr++;
}
}
