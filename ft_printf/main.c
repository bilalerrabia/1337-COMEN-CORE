#include "ft_printf.h"

int main()
{
    int count = 0;
    time_t now = time(NULL);
    char *name = "Bilal";
    void *ptr = name;
    unsigned int uval = 4294967295;
    int dval = -42;
    int i;
    
    ft_printf("---- Testing characters ----\n");
    ft_printf("Char: %c\n", 'A');
    
    ft_printf("---- Testing strings ----\n");
    ft_printf("String: %s\n", name);
    
    ft_printf("---- Testing pointers ----\n");
    ft_printf("Pointer: %p\n", ptr);
    
    ft_printf("---- Testing signed decimal ----\n");
    ft_printf("Decimal: %d\n", dval);
    
    ft_printf("---- Testing signed integer ----\n");
    ft_printf("Integer: %i\n", dval);
    
    ft_printf("---- Testing unsigned ----\n");
    ft_printf("Unsigned: %u\n", uval);
    
    ft_printf("---- Testing hex lower ----\n");
    ft_printf("Hex lower: %x\n", uval);
    
    ft_printf("---- Testing hex upper ----\n");
    ft_printf("Hex upper: %X\n", uval);
    
    ft_printf("---- Testing literal percent ----\n");
    ft_printf("Percent: %%\n");
    
    ft_printf("---- Testing binary (bonus) ----\n");
    ft_printf("Binary of 42: %b\n", 42);
    
    ft_printf("---- Testing date (bonus) ----\n");
    ft_printf("Today is: %k\n", now);
    
    ft_printf("---- Testing %n (bonus) ----\n");
    ft_printf("Hello %s%n World!\n", name, &count);
    ft_printf("Characters printed up to %%n: %d\n", count);
    
    ft_printf("---- Testing multiple %%n ----\n");
    int first = 0, second = 0;
    ft_printf("A%n B %s%n C\n", &first, "Test", &second);
    ft_printf("First %%n = %d, Second %%n = %d\n", first, second);
    
    ft_printf("---- Testing combined line ----\n");
    ft_printf("Char: %c, String: %s, Ptr: %p, Dec: %d, UInt: %u, Hex: %x/%X, Binary: %b, Date: %k%%\n",
        'Z', name, ptr, dval, uval, uval, uval, 255, now);

    return 0;
}