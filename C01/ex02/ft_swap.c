#include <stdio.h>

void ft_swap(int *a, int*b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main (void)
{
	int x;
	int y;

	x = 1;
	y = 2;
	ft_swap(&x, &y);
	printf("%d %d", x, y);
}
