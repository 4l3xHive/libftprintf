#include <stdio.h>

int main()
{
	char buffer[] = "Hello";

	printf("%22.2s: %s\n", NULL, buffer);  // Output: "Hello: Hello"
	printf("%3s: %s\n", buffer, buffer);  // Output: "Hello: 00Hello"
	printf("%-10s: %s\n", buffer, buffer);  // Output: "Hello: Hello  "
	return 0;
}
