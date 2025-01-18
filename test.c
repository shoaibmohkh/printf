#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int x = 42;
	int i = ft_printf("%c %i %%%u %%%p %%%% %x%%%X%%\n", 'A', 42, -1, &x, 255, 255);
	int j = printf("%c %i %%%u %%%p %%%% %x%%%X%%\n", 'A', 42, -1, &x, 255, 255);
	printf("%i %i", i, j);
}

