#include <stdio.h>
#include "ft_b_printf.h" // Replace with the actual header for your ft_printf function

int main() {
    int num = 42;

    // Test 1: Default behavior
       printf("Standard printf (defaul t): %d\n", num);
    ft_printf("Custom ft_printf (default): %d\n", num);

    // Test 2: With '0' flag and width
       printf("Standard printf (with '0' flag and widt h): %05d\n", num);
    ft_printf("Custom ft_printf (with '0' flag and width): %05d\n", num);

    // Test 3: With '0' flag, width, and negative number
    int negative_num = -123;
       printf("Standard printf (with '0' flag, width, and negative  number): %010d\n", negative_num);
    ft_printf("Custom ft_printf (with '0' flag, width, and negative number): %010d\n", negative_num);

    // Test 4: With '0' flag, precision, and width
       printf("Standard printf (with '0' flag, precision, and wi dth): %010.5d\n", -num);
    ft_printf("Custom ft_printf (with '0' flag, precision, and width): %010.5d\n", -num);

    // Test 5: With width and precision
       printf("Standard printf (with width and precisio n): %7.3d\n", num);
    ft_printf("Custom ft_printf (with width and precision): %7.3d\n", num);

    // Test 6: With negative number and precision
       printf("Standard printf (with negative number and precis ion): %.4d\n", negative_num);
    ft_printf("Custom ft_printf (with negative number and precision): %.4d\n", negative_num);

    // Add more test cases as needed to cover other flags and precision settings

    return 0;
}
