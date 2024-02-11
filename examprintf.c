#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int dohexa(unsigned int n) {
    int total_len = 0, i = 0;
    char *hexbuf = "0123456789abcdef";
    char s[100];

    if (n == 0)
        s[i++] = '0';  // Use '0' instead of 0
    while (n) {
        s[i++] = hexbuf[n % 16];
        n /= 16;
    }
    // Reverse the string before writing it out
    while(i--)
		total_len += write(1, &s[i], 1);
    return total_len;
}

int doint(int n) {
    int total_len = 0, i = 0;
    char s[100];

    if (n == -2147483648)
        return write(1, "-2147483648", 11);
    if (n < 0) {
        s[i++] = '-';
        n = -n;
    }
    if (n == 0)
        s[i++] = '0';
    while (n) {
        s[i++] = n % 10 + '0';
        n /= 10;
    }
    while(i--)
		total_len += write(1, &s[i], 1);
    return total_len;
}

int dostr(char *str)
{
    int len = 0;
    if (str == NULL)
        return(write(1, "(null)", 6));
    while (str[len])
        len++;
    return write(1, str, len);
}

int checkarg(const char *s, va_list *args)
{
	if (*s == 'x')
		return (dohexa(va_arg(*args, unsigned int)));
	else if (*s == 'd')
		return (doint(va_arg(*args, int)));
	else if (*s == 's')
		return(dostr(va_arg(*args, char *)));
	return 0;
}


int ft_printf(const char *s, ... )
{
	int total_len = 0, temp = 0;
	va_list args = {0};

	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if((temp = checkarg(s, &args)) < 0)
			{
				total_len = -1;
				break;
			}
			total_len += temp;
			s++;
		}
		else
			total_len += write(1, s++, 1);
	}

	va_end(args);
	return (total_len);
}

