#include <unistd.h>

void	ft_putchar(char ch);
long	ft_atoi(char *str);
void	ft_putnbr(long nb);
void	ft_putstr(char *str);
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
	else
		ft_putstr("Enter only 3 arguments except file name.");
	ft_putchar('\n');
	return (0);
}