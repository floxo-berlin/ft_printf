#include "ft_printf.h"
#include <stdio.h>

void test_format(const char *desc, const char *format, ...)
{
    va_list args;

    printf("\n--------------------------------------------\n");
    printf("Test: %s\n", desc);
    printf("Format: %s\n", format);

    printf("\nOriginal: ");
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\n");

    printf("ft_printf: ");
    va_start(args, format);
    ft_printf(format, args);
    va_end(args);
    printf("\n");

    printf("*** PASSED ***\n");
    printf("--------------------------------------------\n\n");
}

int main(void)
{
    // Testing %c
    test_format("Testing %c", "%c %c %c\n", 'A', 'B', 'C');

    // Testing %s
    test_format("Testing %s", "%s %s %s\n", "Hello", "world", "!");

    // Testing %p
    int x = 42;
    test_format("Testing %p", "%p %p %p\n", (void*)&x, (void*)&x, (void*)&x);

    // Testing %d
    test_format("Testing %d", "%d %d %d\n", 42, -42, 0);

    // Testing %i
    test_format("Testing %i", "%i %i %i\n", 42, -42, 0);

    // Testing %u
    test_format("Testing %u", "%u %u %u\n", 42, 4294967254U, 0);

    // Testing %x
    test_format("Testing %x", "%x %x %x\n", 42, 255, 16);

    // Testing %X
    test_format("Testing %X", "%X %X %X\n", 42, 255, 16);

    // Testing %%
    test_format("Testing %%", "%% %% %%\n");

    return 0;
}
