#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		x = 42;
	char	*s = "Hello";

	ft_printf("My printf:\n");
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", s);
	ft_printf("Pointer: %p\n", &x);
	ft_printf("Int: %d\n", -1234);
	ft_printf("Unsigned: %u\n", 123456);
	ft_printf("Hex lower: %x\n", 255);
	ft_printf("Hex upper: %X\n", 255);
	ft_printf("Percent: %%\n");

	printf("\nReal printf:\n");
	printf("Char: %c\n", 'A');
	printf("String: %s\n", s);
	printf("Pointer: %p\n", &x);
	printf("Int: %d\n", -1234);
	printf("Unsigned: %u\n", 123456);
	printf("Hex lower: %x\n", 255);
	printf("Hex upper: %X\n", 255);
	printf("Percent: %%\n");
}
