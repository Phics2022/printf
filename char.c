#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 *case_c - print for %c specifier
 *@ch: character variable
 *@i: number cont
 *
 *Return: void
 */
void case_c(char ch, int i)
{
char chr = ch;
write(1, &chr, 1);
i++;
}
