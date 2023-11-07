#include <stdio.h>
#include "ft_b_printf.h" // Replace with the actual header for your ft_printf function
#include <limits.h>
int main() {
    // Test 30 to 58: Various format strings with %d and different numbers
    printf("len --> %d", printf(" %-1d ", 0)); // Test 30
    printf("cus len --> %d",ft_printf(" %-1d ", 0));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %-2d", -1)); // Test 31
    printf("len --> %d",ft_printf("Custom ft_printf: %-2d", -1));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %-3d", 1)); // Test 32
    printf("len --> %d",ft_printf("Custom ft_printf: %-3d", 1));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %-4d", 9)); // Test 33
    printf("len --> %d",ft_printf("Custom ft_printf: %-4d", 9));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %-5d", 10)); // Test 34
    printf("len --> %d",ft_printf("Custom ft_printf: %-5d", 10));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 11)); // Test 35
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 11));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 15)); // Test 36
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 15));


     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 16)); // Test 37
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 16));

     printf("\n\nnew test\n\n");


    printf("len --> %d",printf("Standard printf: %d", 17)); // Test 38
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 17));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 99)); // Test 39
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 99));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 100)); // Test 40
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 100));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", 101)); // Test 41
    printf("len --> %d",ft_printf("Custom ft_printf: %d", 101));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", -9)); // Test 42
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -9));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", -10)); // Test 43
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -10));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", -11)); // Test 44
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -11));

     printf("\n\nnew test\n\n");

    printf("len --> %d",printf("Standard printf: %d", -14)); // Test 45
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -14));

     printf("\n\nnew test\n\n");

   printf("len --> %d", printf("Standard printf: %d", -15)); // Test 46
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -15));

     printf("\n\nnew test\n\n");

   printf("len --> %d", printf("Standard printf: %d", -16)); // Test 47
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -16));

     printf("\n\nnew test\n\n");

   printf("len --> %d", printf("Standard printf: %d", -99)); // Test 48
   printf("len --> %d", ft_printf("Custom ft_printf: %d", -99));
    
    printf("\n\nnew test\n\n");

   printf("len --> %d", printf("Standard printf: %d", -100)); // Test 49
    printf("len --> %d",ft_printf("Custom ft_printf: %d", -100));

    printf("Standard printf: %d", -101); // Test 50
    ft_printf("Custom ft_printf: %d", -101);

    printf("Standard printf: %d", INT_MAX); // Test 51
    ft_printf("Custom ft_printf: %d", INT_MAX);

    printf("Standard printf: %d", INT_MIN); // Test 52
    ft_printf("Custom ft_printf: %d", INT_MIN);

    printf("Standard printf: %d", LONG_MAX); // Test 53
    ft_printf("Custom ft_printf: %d", LONG_MAX);

    printf("Standard printf: %d", LONG_MIN); // Test 54
    ft_printf("Custom ft_printf: %d", LONG_MIN);

    printf("Standard printf: %d", UINT_MAX); // Test 55
    ft_printf("Custom ft_printf: %d", UINT_MAX);

    printf("Standard printf: %d", ULONG_MAX); // Test 56
    ft_printf("Custom ft_printf: %d", ULONG_MAX);

    printf("Standard printf: %d", 9223372036854775807LL); // Test 57
    ft_printf("Custom ft_printf: %d", 9223372036854775807LL);

    return 0;
}
