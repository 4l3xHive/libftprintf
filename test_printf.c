#include "ft_printf.h"  // Replace with the correct header file name
#include <stdio.h>


int main() {
   
	
/*	printf("--> %d", ft_printf("ft_hexa cap-->%X\n", 12 ));
	printf(" --> %d", ft_printf("ft_hexa smal -->%x\n", 15));
	printf("--> %d", ft_printf("Hello ,%% %% %%\n\n"));
	ft_printf("Hello,%c!\n", 'X');
	printf("\n\nlen of printed -->%d",ft_printf("Number-->%d\n",233));

*/
	//printf("-->%d\n", ft_printf("Hello ,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));


    int total_length;

    // Create a sample pointer to test
    void *sample_pointer = (void *)0x12345678;

    // Call ft_printf with the %p format specifier
    total_length = ft_printf("Test %p\n", sample_pointer);

    printf("Total length: %d\n", total_length);
	
	return 0;


}

//gcc -o test_printf test_printf.c -I. -L. -lftprintf
