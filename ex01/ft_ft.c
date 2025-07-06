#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number;

	number = 5;
	printf("Firsts it was: %d\n", number);
	ft_ft(&number);
	printf("Result after function called: %d\n", number);
	return 0;
}
