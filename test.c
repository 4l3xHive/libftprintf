#include <stdio.h>
#include "ft_b_printf.h"
int main()
{
	
//	printf("my len --> %d\n", ft_printf("%-1c\n", '0'));
	  // printf("org len --> %d\n", printf("%-1c\n", '0'));


	printf("my len --> %d\n", ft_printf(" %-10c ", '0'));
	
	printf("org len --> %d", printf(" %-10c ", '0'));
	



	//ft_printf(" %-3c", '0' - 256);
	/*ft_printf("%-4c ", '0' + 256);
	ft_printf(" %-1c %-2c %-3c ", '0', 0, '1');
	ft_printf(" %-1c %-2c %-3c ", ' ', ' ', ' ');
	ft_printf(" %-1c %-2c %-3c ", '1', '2', '3');
	ft_printf(" %-1c %-2c %-3c ", '2', '1', 0);
	ft_printf(" %-1c %-2c %-3c ", 0, '1', '2');
	*/

	return 0;
}
