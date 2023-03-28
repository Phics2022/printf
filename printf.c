#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list ar_list;
		int (*o)(va_list);

		va_start(ar_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = get_func(format[i + 1]);
					count += (o ? o(ar_list) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(ar_list);
	}

	return (count);
}
