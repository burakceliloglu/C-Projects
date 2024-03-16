void	ft_putchar(char ch);

void	ft_printnumber(int i, int j)
{
	if (j == 1 && i == 1)
		ft_putchar('1');
	if (j == 5 && i == 1)
		ft_putchar('2');
	if (j == 9 && i == 1)
		ft_putchar('3');
	if (j == 1 && i == 4)
		ft_putchar('4');
	if (j == 5 && i == 4)
		ft_putchar('5');
	if (j == 9 && i == 4)
		ft_putchar('6');
	if (j == 1 && i == 7)
		ft_putchar('7');
	if (j == 5 && i == 7)
		ft_putchar('8');
	if (j == 9 && i == 7)
		ft_putchar('9');
}