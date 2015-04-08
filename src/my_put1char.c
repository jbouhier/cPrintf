#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int		my_put1char(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	write (1, &c, 1);

	return (1);
}
