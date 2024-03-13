#include <unistd.h>

void	ft_putchar(char ch);
int		ft_atoi(char *str);
void	ft_putnbr(long nb);
long	ft_calculator(long first, long second, char operator, long result);

int	main(int argc, char **argv)
{
	long	first;
	long	second;
	char	operator;
	long	result;

	if (argc == 4)
	{
		result = -1;
		first = ft_atoi(argv[1]);
		operator = argv[2][0];
		second = ft_atoi(argv[3]);
		result = ft_calculator(first, second, operator, result);
		ft_putnbr(result);
	}
	ft_putchar('\n');
	return (0);
}