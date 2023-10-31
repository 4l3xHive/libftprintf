// C program for the above approach

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

	
void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        write(1, "-", 1);
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        char c = nbr + '0';
		write(1, &c, 1);
    }
}


int my_printf(char *s, ...)
{
	va_list ptr; // ptr for arguments

	va_start(ptr, s);
	

	while (*s){

		if (*s == '%'){
			s++;
			switch (*s){

				case 'd':	
					ft_putnbr(va_arg(ptr, int));

				case 's':
					puts(va_arg(ptr, char *));

				case 'c':
					char c = va_arg(ptr, int);
					write(1, &c, 1);

			}
			s++;
		}
		else write(1, s++, 1);
	}

	va_end(ptr);
	
	return 0;
}

// Driver Code
int main()
{


	my_printf("hello world %c", 'c');



	return 0;
}

