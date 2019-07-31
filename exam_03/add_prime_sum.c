/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:17:37 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 10:13:15 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_prime(int a)
{
	int i;

	i = 2;
	while (i < a)
		if (!(a % i++))
			return (0);
	return(1);
}


int		atoi(char *str)
{
	int i;
	int r;

	i = 0;
	r = 0;
	if (str[i] == '-')
		return (0);
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		r = r * 10 + str[i++] - '0';
	return (r);
}



int		add(int n)
{
	int result;
	int i;

	i = 2;
	result = 0;
	while (i <= n)
	{
		if (is_prime(i))
			result += i;
		i++;
	}
	return (result);
}

void	putnbr(int a)
{
	if (a > 9)
		putnbr(a / 10);
	ft_putchar(a % 10 + '0');
}


int		main(int ac, char **av)
{
	
	if (ac == 2)
	{
		if (atoi(av[1]) < 2)
			write(1, "0", 1);
		else if (atoi(av[1]) == 2)
			write(1, "2", 1);
		else
			putnbr(add(atoi(av[1])));
	}
	
//	putnbr(atoi(av[1]));
	ft_putchar('\n');
	return (0);
}


