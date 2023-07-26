#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a;
	int b;

	a = 2;
	b = 1;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
