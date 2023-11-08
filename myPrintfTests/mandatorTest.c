 
 
 #include <stdio.h>
 #include "ft_m_printf.h"
 #include <stdint.h>
 #include <limits.h>
 
int main(void){

	printf("my --> %d", ft_printf(" %-200p ", (void* ) -1));
        printf("\n\n new\n\n");
	printf("or --> %d", printf(" %x ", -1));
	/*TEST(22, print(" %-2p ", 1));
	TEST(23, print(" %-2p ", 15));
	TEST(24, print(" %-3p ", 16));
	TEST(25, print(" %-4p ", 17));
	TEST(26, print(" %-9p %-10p ", LONG_MIN, LONG_MAX));
	TEST(27, print(" %-11p %-12p ", INT_MIN, INT_MAX));
	TEST(28, print(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX));
	TEST(29, print(" %-1p %-2p ", 0, 0));
*/

     return 0;
}