#include "ft_printf.h"  // Replace with the correct header file name
#include <stdio.h>


int main() {
   
	
	//printf("len -->%x\n", ft_printf("ft Hello str,%s!\n", "world" ));
	printf("ft_hexa cap len -->%d", ft_printf("ft_hexa cap-->%X\n", 12 ));
	printf("ft hexa smal len -->%d", ft_printf("ft_hexa smal --> %x\n", 16));
	//printf("-->%d\n", ft_printf("Hello perc,%%!\n"));
	
	
	//printf("-->%d\n", ft_printf("Hello ,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));

	
	
	
	
	return 0;


}

//gcc -o test_printf test_printf.c -I. -L. -lftprintf
