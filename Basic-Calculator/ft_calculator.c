void	ft_putstr(char *str);

long	ft_calculator(long first, long second, char operator, long result)
{
	if (operator == '+')
		result = first + second;
	else if (operator == '-')
		result = first - second;
	else if (operator == '/' && second != 0)
		result = first / second;
	else if (operator == '%' && second != 0)
		result = first % second;
	else if (operator == '*')
		result = first * second;
	else
		ft_putstr("Something went wrong! Try again.");
	return (result);
}
