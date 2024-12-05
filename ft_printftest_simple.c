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

    // Test %c
    printf("Testing %%c:\n");
    printf("Original: %c\n", c);
    ft_printf("Custom: %c\n\n", c);

    // Test %s
    printf("Testing %%s:\n");
    printf("Original: %s\n", str);
    ft_printf("Custom: %s\n\n", str);

    // Test %p
    printf("Testing %%p:\n");
    printf("Original: %p\n", ptr);
    ft_printf("Custom: %p\n\n", ptr);

    // Test %d
    printf("Testing %%d:\n");
    printf("Original: %d\n", d);
    ft_printf("Custom: %d\n\n", d);

    // Test %i
    printf("Testing %%i:\n");
    printf("Original: %i\n", i);
    ft_printf("Custom: %i\n\n", i);

    // Test %u
    printf("Testing %%u:\n");
    printf("Original: %u\n", u);
    ft_printf("Custom: %u\n\n", u);

    // Test %x
    printf("Testing %%x:\n");
    printf("Original: %x\n", x);
    ft_printf("Custom: %x\n\n", x);

    // Test %X
    printf("Testing %%X:\n");
    printf("Original: %X\n", X);
    ft_printf("Custom: %X\n\n", X);

    // Test %%
    printf("Testing %%%%:\n");
    printf("Original: %%\n");
    ft_printf("Custom: %%\n\n");

    return 0;
}
