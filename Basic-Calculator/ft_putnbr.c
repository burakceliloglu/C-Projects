void	ft_putchar(char ch);

void	ft_putnbr(long nb)
{
	if (nb < 0)
		nb *= -1;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10);
}
