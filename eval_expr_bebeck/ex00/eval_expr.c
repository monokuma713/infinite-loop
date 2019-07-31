/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:26:49 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/28 20:24:31 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

int		get_number(char **str)
{
	int		n1;

	if (**str == '(')
	{
		(*str)++;
		n1 = add_sub(str);
		if (**str == ')')
			(*str)++;
		return (n1);
	}
	return (ft_atoi(str));
}

int		mul_div_mod(char **str)
{
	int		n1;
	int		n2;
	char	ops;

	n1 = get_number(str);
	while (**str)
	{
		ops = **str;
		if (ops != '*' && ops != '/' && ops != '%')
			return (n1);
		(*str)++;
		n2 = get_number(str);
		if (ops == '*')
			n1 *= n2;
		else if (ops == '/')
			n1 /= n2;
		else
			n1 %= n2;
	}
	return (n1);
}

int		add_sub(char **str)
{
	int		n1;
	int		n2;
	char	ops;

	n1 = mul_div_mod(str);
	while (**str)
	{
		ops = **str;
		if (ops != '+' && ops != '-')
			return (n1);
		(*str)++;
		n2 = mul_div_mod(str);
		if (ops == '+')
			n1 += n2;
		else
			n1 -= n2;
	}
	return (n1);
}

int		eval_expr(char *str)
{
	str = space_must_die(str);
	return (add_sub(&str));
}

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
