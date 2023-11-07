#include <stdio.h>
#include "ft_b_printf.h"
#include <limits.h>
#include <string.h>



int main()
{

//	ft_printf(" %.s ", "-");
////	printf("\n\n\n\nnew \n\n\n\n");
///	printf(" %.s ", "A");

	//printf("--> %d", ft_printf("%01d|%-", 0, 0));

	// NBR 0 TESTS 
	




	//printf("%010d")

	/*printf("return --> %d", ft_printf("%-10.5d", 10));
	printf("\nnew\n");
	printf("return --> %d", printf("%-10.5d", 10));


			printf("\n\nnew test\n\n");


	printf("return --> %d", ft_printf("%-40.1d", -10));
	printf("\nnew\n");
	printf("return --> %d", printf("%-40d", -10));


			printf("\n\nnew test\n\n");


	printf("return --> %d", ft_printf("%-1000.2d", 300));
	printf("\nnew\n");
	printf("return --> %d", printf("%-1000.2d", 300));


			printf("\n\nnew test\n\n");


	printf("return --> %d", ft_printf("%-104.5d", 10));
	printf("\nnew\n");
	printf("return --> %d", printf("%-104.5d", 10));

		printf("\n\nnew test\n\n");

	printf("return --> %d", ft_printf("%-20000000000.5d", 10));
	printf("\nnew\n");
	printf("return --> %d", printf("%-2000000000000.5d", 10));
	*/
	  
	  
	  
	  
	  
	  
	  
	  /*printf("\n\n\n minus \n\n\n");
	  printf("return --> %d", ft_printf("%d", 200));
        printf("\n\n\nnew\n\n\n");
        printf("return --> %d", printf("%d", 200));
*/



	




	// STRING TEST INT MAX WIDTH !!!
	/*printf("return --> %d", ft_printf("%20.2000000000s", "hello"));
	printf("\n\n\nnew\n\n\n");
	printf("return --> %d", printf("%20.20000000000s", "hello"));
	  
	  printf("\n\n\n minus \n\n\n");
	  printf("return --> %d", ft_printf("%-20.2000000000s", "hello"));
        printf("\n\n\nnew\n\n\n");
        printf("return --> %d", printf("%-20.20000000000s", "hello"));
	*/
	//	printf("--> %d", printf("%214748049d",  211111111));



//	ft_printf(" %-1s %-2s ", "", "-");
//	printf("\n\n");
//	ft_printf("\n%-3s %-4s ", " - ", "");
	//printf(" --> %d ", ft_printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", ""));
	//printf("--> %d", ft_printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 "));	
	//printf("\n");
/*	printf("\n\n\n new\n \n\n");
	printf(" %-1s %-2s ", "", "-");
	printf("\n\n");
	printf("\n%-3s %-4s ", " - ", "");*/
	//printf(" --> %d ", printf(" %-2s %-3s %-4s %-5s ", " - ", "", "4", ""));
	//printf("--> %d\n", printf(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 "));
	
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
//gcc -o test test.c -I../bonus -L.. -lftprintf
//cc test.c -o test -I../bonus -I../libft -L.. -lftprintf
