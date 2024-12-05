#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // Testing %c
    printf("Original: %c %c %c\n", 'A', 'B', 'C');
    ft_printf("Custom: %c %c %c\n", 'A', 'B', 'C');

    // Testing %s
    printf("Original: %s %s %s\n", "Hello", "world", "!");
    ft_printf("Custom: %s %s %s\n", "Hello", "world", "!");

    // Testing %p
    int x = 42;
    printf("Original: %p %p %p\n", (void*)&x, (void*)&x, (void*)&x);
    ft_printf("Custom: %p %p %p\n", (void*)&x, (void*)&x, (void*)&x);

    // Testing %d
    printf("Original: %d %d %d\n", 42, -42, 0);
    ft_printf("Custom: %d %d %d\n", 42, -42, 0);

    // Testing %i
    printf("Original: %i %i %i\n", 42, -42, 0);
    ft_printf("Custom: %i %i %i\n", 42, -42, 0);

    // Testing %u
    printf("Original: %u %u %u\n", 42, 4294967254, 0);
    ft_printf("Custom: %u %u %u\n", 42, 4294967254, 0);

    // Testing %x
    printf("Original: %x %x %x\n", 42, 255, 16);
    ft_printf("Custom: %x %x %x\n", 42, 255, 16);

    // Testing %X
    printf("Original: %X %X %X\n", 42, 255, 16);
    ft_printf("Custom: %X %X %X\n", 42, 255, 16);

    // Testing %%
    printf("Original: %% %% %%\n");
    ft_printf("Custom: %% %% %%\n");

    return 0;
}
