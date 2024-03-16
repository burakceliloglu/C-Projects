void    ft_putchar(char ch);
void	ft_printnumber(int i, int j);

void    ft_printmap()
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 11)
		{
			if (j == 3 || j == 7)
				ft_putchar('|');
			else if (i == 2 || i == 5)
				ft_putchar('_');
			else if ((i == 1 || i == 4 || i == 7) && 
				(j == 1 || j == 5 || j == 9))
				ft_printnumber(i, j);
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}