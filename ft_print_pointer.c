#include "ft_printf.h"

void ft_print_ptr(void *ptr)
{
    uintptr_t addr;
    char *hex = "0123456789abcdef";

    addr = (uintptr_t)ptr;
    write(1, "0x", 2);
    for (int i = (sizeof(uintptr_t) * 2) - 1; i >= 0; i--)
    {
        write(1, &hex[(addr >> (i * 4)) & 0xf], 1);
    }
}
