#include "ft_printf.h"  // Replace with the correct header file name
#include <stdio.h>


int main() {
   
	
	printf("len --> %d", ft_printf("%c", '0'));
	printf("len --> %d", ft_printf(" %c", '0'));
			//ft_printf("Hello ,%c %c %c\n\n", 'C', 'A', 'G');
			//	ft_printf("Hello ,%c %c %c\n\n", 'C', 'A', 'G');
			//		ft_printf("Hello ,%c %c %c\n\n", 'C', 'A', 'G');
			//			ft_printf("Hello ,%c %c %c\n\n", 'C', 'A', 'G');

	//printf("-->%d\n", ft_printf("Hello ,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));
	//printf("-->%d\n", ft_printf("Hello,%s!\n", "world" ));


    //int total_length;

    // Create a sample pointer to test
    //void *sample_pointer = (void *)0x12345678;

    // Call ft_printf with the %p format specifier
  //  total_length = ft_printf("Test %p\n", sample_pointer);

//    printf("Total length: %d\n", total_length);
	
	return 0;


}

//gcc -o test_printf test_printf.c -I. -L. -lftprintf
