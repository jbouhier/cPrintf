/*
** main.c for my_printf in /Users/synxs/etna/c/printf/src
** 
** Made by Jean-Baptiste Bouhier
** Login   <bouhie_j@etna-alternance.net>
** 
** Started on  Sun Nov 16 09:42:42 2014 Jean-Baptiste Bouhier
** Last update Wed Nov 19 12:40:20 2014 Jean-Baptiste Bouhier
*/

#include <stdlib.h>
#include <stdio.h>
#include "src/my.h"

int		main(void)
{
//	my_printf("1 - une chaine\n");
//	my_printf("2 - %s\n", "une autre chaine");
//	my_printf("3 - %i\n", 42);
//	my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');

	printf("1 - %o\n", 42);
	my_printf("1 - %o\n\n", 42);         // unsigned octal

	printf("2 - %ld\n", 4200000000);
	my_printf("2 - %u\n\n", 4200000000); // unsigned decimal

	printf("3 - %x\n", 42);
	my_printf("3 - %x\n\n", 42);         // unsigned hexadecimal

	printf("4 - %X\n", 42);
	my_printf("4 - %X\n\n", 42);         // unsigned hexadecimal 

	printf("5 - %d%%\n", 42);
	my_printf("5 - %d%%\n", 42);

	return (0);
}
