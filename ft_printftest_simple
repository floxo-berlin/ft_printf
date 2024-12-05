/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printftest_simple.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporzig <fporzig@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:35:57 by fporzig           #+#    #+#             */
/*   Updated: 2024/12/05 21:35:59 by fporzig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char			c;
	char			*str;
	void			*ptr;
	int				d;
	int				i;
	unsigned int	u;
	unsigned int	x;
	unsigned int	X;

	c = 'A';
	str = "Hello, World!";
	ptr = &c;
	d = 42;
	i = -42;
	u = 4294967254U;
	x = 255;
	X = 255;

	printf("Variables Initialization:\n");
	printf("char c = 'A';\n");
	printf("char *str = \"Hello, World!\";\n");
	printf("void *ptr = &c;\n");
	printf("int d = 42;\n");
	printf("int i = -42;\n");
	printf("unsigned int u = 4294967254U;\n");
	printf("unsigned int x = 255;\n");
	printf("unsigned int X = 255;\n\n");

	// Test %c
	printf("******************\n");
	printf("Testing %%c:\n");
	printf("printf(\"%%c\", c)\n");
	printf("Original printf(\"%%c\", c): %c\n", c);
	printf("ft_printf(\"%%c\", c)\n");
	ft_printf("My ft_printf(\"%%c\", c): %c\n\n", c);
	printf("\n\n");

	// Test %s
	printf("******************\n");
	printf("Testing %%s:\n");
	printf("printf(\"%%s\", str)\n");
	printf("Original printf(\"%%s\", str): %s\n", str);
	printf("ft_printf(\"%%s\", str)\n");
	ft_printf("My ft_printf(\"%%s\", str): %s\n\n", str);
	printf("\n\n");

	// Test %p
	printf("******************\n");
	printf("Testing %%p:\n");
	printf("printf(\"%%p\", ptr)\n");
	printf("Original printf(\"%%p\", ptr): %p\n", ptr);
	printf("ft_printf(\"%%p\", ptr)\n");
	ft_printf("My ft_printf(\"%%p\", ptr): %p\n\n", ptr);
	printf("\n\n");

	// Test %d
	printf("******************\n");
	printf("Testing %%d:\n");
	printf("printf(\"%%d\", d)\n");
	printf("Original printf(\"%%d\", d): %d\n", d);
	printf("ft_printf(\"%%d\", d)\n");
	ft_printf("My ft_printf(\"%%d\", d): %d\n\n", d);
	printf("\n\n");

	// Test %i
	printf("******************\n");
	printf("Testing %%i:\n");
	printf("printf(\"%%i\", i)\n");
	printf("Original printf(\"%%i\", i): %i\n", i);
	printf("ft_printf(\"%%i\", i)\n");
	ft_printf("My ft_printf(\"%%i\", i): %i\n\n", i);
	printf("\n\n");

	// Test %u
	printf("******************\n");
	printf("Testing %%u:\n");
	printf("printf(\"%%u\", u)\n");
	printf("Original printf(\"%%u\", u): %u\n", u);
	printf("ft_printf(\"%%u\", u)\n");
	ft_printf("My ft_printf(\"%%u\", u): %u\n\n", u);
	printf("\n\n");

	// Test %x
	printf("******************\n");
	printf("Testing %%x:\n");
	printf("printf(\"%%x\", x)\n");
	printf("Original printf(\"%%x\", x): %x\n", x);
	printf("ft_printf(\"%%x\", x)\n");
	ft_printf("My ft_printf(\"%%x\", x): %x\n\n", x);
	printf("\n\n");

	// Test %X
	printf("******************\n");
	printf("Testing %%X:\n");
	printf("printf(\"%%X\", X)\n");
	printf("Original printf(\"%%X\", X): %X\n", X);
	printf("ft_printf(\"%%X\", X)\n");
	ft_printf("My ft_printf(\"%%X\", X): %X\n\n", X);
	printf("\n\n");

	// Test %%
	printf("******************\n");
	printf("Testing %%%%:\n");
	printf("printf(\"%%%%\")\n");
	printf("Original printf(\"%%%%\"): %%\n");
	printf("ft_printf(\"%%%%\")\n");
	ft_printf("My ft_printf(\"%%%%\"): %%\n\n");
	printf("\n\n");
	return (0);
}
