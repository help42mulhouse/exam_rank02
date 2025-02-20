#include <stdlib.h>
#include <stdio.h>

static void	ft_pgcd(int nbr_1, int nbr_2);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_pgcd(atoi(argv[0x1]), atoi(argv[0x2]));
	return (EXIT_SUCCESS);
}

static void	ft_pgcd(int nbr_1, int nbr_2)
{
	int	div;
	int	pgcd;

	div = 0x1;
	if (nbr_1 <= 0x0 || nbr_2 <= 0x0)
		return ;
	while ((div <= nbr_1) || (div <= nbr_2))
	{
		if (((nbr_1 % div) == 0x0) && ((nbr_2 % div) == 0x0))
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}