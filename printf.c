#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *_printf - create a printf function
 *@format: format
 *
 *Return: characters count
 */
int _printf(const char *format, ...)
{
const char *ptr = format;
int num_cont = 0;
va_list args;
va_start(args, format);
if (ptr == NULL)
return (0);
while (*ptr)
{
if (*ptr == '%')
{
ptr++;
switch (*ptr)
{
case 'c':
case_c((char)va_arg(args, int), num_cont);
break;
case 's':
case_s(va_arg(args, const char*), num_cont);
break;
case '%':
case_pers(num_cont);
break;
}
}
else
write(1, ptr, 1);
num_cont++;
ptr++;
}
va_end(args);
return (num_cont);
}
