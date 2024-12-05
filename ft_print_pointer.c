#include "ft_printf.h"
#include <stdint.h>

int ft_print_ptr(void *ptr)
{
    uintptr_t addr = (uintptr_t)ptr;
    char *hex = "0123456789abcdef";
    int count = 2; // For "0x"

    write(1, "0x", 2);
    if (addr == 0)
    {
        write(1, "0", 1);
        return count + 1;
    }
    else
    {
        char buffer[16];
        int i = 15;
        while (addr)
        {
            buffer[i--] = hex[addr % 16];
            addr /= 16;
        }
        while (++i < 16)
        {
            write(1, &buffer[i], 1);
            count++;
        }
    }
    return count;
}
