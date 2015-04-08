#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int		my_printf(char *format, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, format);
	result = my_vfprintf (format, ap);
	va_end(ap);

	return (result);
}

int		my_vfprintf(char *format, va_list ap)
{
	int 	result;
	int		i;
	int		j;

	i = 0;
	result = 0;
	t_flist	flist[] =
	{
		{ 'c', &my_put1char },
		{ 's', &my_putstr  },
		{ 'd', &my_put_nbr },
		{ 'i', &my_put_nbr },
		{ 'u', &my_put_octal }
	};
	if (my_strlen(format) == 0)
		return (0);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == '%')
				result += my_putchar(format[i]);
			else
			{
				j = 0;
				while (flist[j].c)
				{
					if (format[i] == flist[j].c)
						result += flist[j].f(ap);
					j++;
				}
			}
		}
		else
			result += my_putchar(format[i]);
		i++;
	}
	return (result);
}
