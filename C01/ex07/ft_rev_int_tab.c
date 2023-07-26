#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while(i < (size/2))
	{
		swap = tab[i];
		tab[i] = tab [size -1 -i];
		tab [size -1 -i] = swap;
		i++;
	}
}

int main (void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return(0);
}
