#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = &c;
    int d = 42;
    int i = -42;
    unsigned int u = 4294967254U;
    unsigned int x = 255;
    unsigned int X = 255;

    // Print variable initialization
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
    printf("Original printf(): %c\n\n", c);
    printf("ft_printf(\"%%c\", c)\n");
    ft_printf("My ft_printf(): %c\n\n", c);
    printf("\n\n");

    // Test %s
    printf("******************\n");
    printf("Testing %%s:\n");
    printf("printf(\"%%s\", str)\n");
    printf("Original printf(): %s\n\n", str);
    printf("ft_printf(\"%%s\", str)\n");
    ft_printf("My ft_printf(): %s\n\n", str);
    printf("\n\n");

    // Test %p
    printf("******************\n");
    printf("Testing %%p:\n");
    printf("printf(\"%%p\", ptr)\n");
    printf("Original printf(): %p\n\n", ptr);
    printf("ft_printf(\"%%p\", ptr)\n");
    ft_printf("My ft_printf(): %p\n\n", ptr);
    printf("\n\n");

    // Test %d
    printf("******************\n");
    printf("Testing %%d:\n");
    printf("printf(\"%%d\", d)\n");
    printf("Original printf(): %d\n\n", d);
    printf("ft_printf(\"%%d\", d)\n");
    ft_printf("My ft_printf(): %d\n\n", d);
    printf("\n\n");

    // Test %i
    printf("******************\n");
    printf("Testing %%i:\n");
    printf("printf(\"%%i\", i)\n");
    printf("Original printf(): %i\n\n", i);
    printf("ft_printf(\"%%i\", i)\n");
    ft_printf("My ft_printf(): %i\n\n", i);
    printf("\n\n");

    // Test %u
    printf("******************\n");
    printf("Testing %%u:\n");
    printf("printf(\"%%u\", u)\n");
    printf("Original printf(): %u\n\n", u);
    printf("ft_printf(\"%%u\", u)\n");
    ft_printf("My ft_printf(): %u\n\n", u);
    printf("\n\n");

    // Test %x
    printf("******************\n");
    printf("Testing %%x:\n");
    printf("printf(\"%%x\", x)\n");
    printf("Original printf(): %x\n\n", x);
    printf("ft_printf(\"%%x\", x)\n");
    ft_printf("My ft_printf(): %x\n\n", x);
    printf("\n\n");

    // Test %X
    printf("******************\n");
    printf("Testing %%X:\n");
    printf("printf(\"%%X\", X)\n");
    printf("Original printf(): %X\n\n", X);
    printf("ft_printf(\"%%X\", X)\n");
    ft_printf("My ft_printf(): %X\n\n", X);
    printf("\n\n");

    // Test %%
    printf("******************\n");
    printf("Testing %%%%:\n");
    printf("printf(\"%%%%\")\n");
    printf("Original printf(): %%\n\n");
    printf("ft_printf(\"%%%%\")\n");
    ft_printf("My ft_printf(): %%\n\n");
    printf("\n\n");

    return 0;
}
