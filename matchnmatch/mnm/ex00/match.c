/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 23:30:10 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/21 12:26:43 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] == b[i] && *a && *b)
		i++;
	return (a[i] - b[i]);
}

int		ft_strlen(char *c)
{
	int len;

	len = 0;
	while (c[len] != '\0')
		len++;
	return (len);
}

int		match(char *s1, char *s2)
{
	if (ft_strcmp(s1, s2) == 0 || (s2[0] == '*' && s2[1] == '\0'))
		return (1);
	if (ft_strlen(s1) == 0)
		return (0);
	if (s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	if (s2[0] == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}
