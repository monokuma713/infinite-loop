/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:30:07 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/21 15:08:03 by mzhou            ###   ########.fr       */
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

int		nmatch(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == '\0')
		return (s2[0] == '*' ? nmatch(s1, s2 + 1) : 0);
	if (s2[0] == s1[0])
		return (nmatch(s1 + 1, s2 + 1));
	if (s2[0] == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (ft_strcmp(s1, s2) != 0)
		return (0);
	return (-1);
}
