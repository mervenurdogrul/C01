#include <stdio.h>

void ft_putstr(char *str)
{
	printf("%s", str);
}

int main (void)
{
	char *c = "Hello World!";
	ft_putstr(c);
	return(0);
}
