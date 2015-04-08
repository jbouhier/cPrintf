#include "my.h"
#include <stdarg.h>

int		my_putstr(va_list ap)
{
	int		i;
	char	*str;

	i = 0;
	str = va_arg(ap, char*);
	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
	return (i);
}
