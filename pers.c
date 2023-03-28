#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *case_pers - percentage
 *@i: characters
 *
 *Return: void
 */
void case_pers(int i)
{
char chr = '%';
write(1, &chr, 1);
i++;
}
