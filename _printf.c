#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list argptr;
	int count = 0;

	va_start(argptr, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(argptr, int);
				count += putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(argptr, char *);
				count += printf("%s", str);
			}
			else if (*format == '%')
			{
				count += putchar('%');
			}
			else
			{
				count += putchar('%');
				count += putchar(*format);
			}
		}
		else
		{
			count += putchar(*format);
		}

		format++;
	}

	va_end(argptr);

	return count;
}
