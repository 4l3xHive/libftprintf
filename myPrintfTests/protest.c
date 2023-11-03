#include "ft_printf.h"

int main()
{
    ft_printf("1. Print int (%%d): %d\n", 42);
    ft_printf("2. Print uint (%%u): %10u\n", -42);
    ft_printf("3. Print unsigned octal (%%o): %o\n", 42);
    ft_printf("4. Print unsigned hex (%%x): %#x\n", 42);
    ft_printf("5. Print unsigned hex (%%X): %#X\n", 42);
    ft_printf("6. Print char (%%c): %c\n", 97);
    ft_printf("7. Print string (%%s): %s\n", "Hello, world!");
    ft_printf("8. Print pointer address (%%p): %p\n", NULL);
    ft_printf("9. Print float (%%f): %.30f\n", 0.3);
    return (0);
}
