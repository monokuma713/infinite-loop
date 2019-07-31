/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:47:02 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/15 18:03:17 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	num_door(int a)
{
	if (a % 2 == 0)
		return(a - 1);
	else
		return(a);
}

int	calc_base(int n)
{
	int odd_even;

	if (n % 2 == 0)
		odd_even = (n/2) * (n/2) - 2 * (n/2) + 1;
	else
		odd_even = (n/2) * (n/2) - n/2;
	return (n * (n + 9) - 5 + 2 * odd_even);
}

int calc_wid_diff(int a)
{
	return (2 * a + 7 + 2 * (a / 2));
}

void	print_individual(int a, int b)
{
	int i;
	int j;
	int space;

	i = 1;
	while (i < a + 3)
	{
		j = 0;
		space = (calc_base(b) - calc_base(a) - 2 * (i - a)) / 2;
		while (j <= space + 1)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
	
		j = 0;
		while (j < calc_base(a) + 2 * (i - a) - 4)
		{
			/*if (a == b)
			{
				if (a + 3 - i <= num_door(a))
				{
					int k = 0;
					k  = calc_base(a) / 2 + i - a -2;
							while (k > 0)
							{
							ft_putchar('*');
							k--;
							}
						//	k = 0;
							while (k < num_door(a))
							{
								ft_putchar('|');
								k++;
							}
							k = 0;
							while (k < calc_base(a) / 2 + i - a -2)
							{
								ft_putchar('*');
								k++;
							}
										
				}
			} */
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}


/*
void	print_last(int a)
{
	int i;
	int j;

	i = 1;
	while (i < a + 3)
	{
		j = 0;
		while (j <= (calc_base(a) - calc_base(a - 1) - calc_wid_diff(a - 1) - 2 * (i - a)) / 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		j = 0;
		while (j < calc_base(a) + 2 * (i - a) - 4)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}
*/

void	sastantua(int size)
{
	int i;

	i = 1;
	while (i <= size)
	{
		print_individual(i, size);
		i++;
	}
	/* print_last(a); */
}

int		main(void)
{
	sastantua(7);
	return(0);
}
