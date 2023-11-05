#include <stdio.h>
#include "ft_b_printf.h"
int main()
{
	printf(" --> %d ", ft_printf(" %-1s %-2s ", "", "-"));
	printf(" --> %d ", ft_printf(" %-3s %-4s ", " - ", ""));
	printf(" --> %d ", ft_printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", ""));
	printf("--> %d\n", ft_printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 "));	
	printf("\n");
	printf(" --> %d ", printf(" %-1s %-2s ", "", "-"));
	printf(" --> %d ", printf(" %-3s %-4s ", " - ", ""));
	printf(" --> %d ", printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", ""));
	printf("--> %d\n", printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 "));
	
	
	//printf("my len --> %d", ft_printf("%-4c", '0'));
	//printf("org len --> %d", printf("%-4c", '0'));

	//printf("my len --> %d", ft_printf("%-3.2s", NULL));
	//printf("org len --> %d", printf("%-2s", "helloyolooooooo"));
	//printf("org len --> %d", printf("%-10s", "hello"));
	//printf("org len --> %d", ft_printf("%-2s", "helloyolooooooo"));	

	//printf("org len --> %d", printf("%-10.2s", "hello"));
	//printf("org len --> %d", printf(" %-5.4s ", "hello"));


	//printf("org len --> %d", printf(" %-10.2s ", "hello" ));

	//printf("\nmy len --> %d\n", ft_printf("%c", 'c'));

	//printf("org len --> %d", printf(" %-10.2s ", "hello" ));


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
//compile command
//gcc -o test_printf test_printf.c -I. -L. -lftprintf
