/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <berpinhe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 02:15:06 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/18 02:36:12 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_check_swap(char **s1, char **s2)
{
	char	*temp;

	if (ft_strcmp(*s1, *s2) > 0)
	{
		temp = *s1;
		*s1 = *s2;
		*s2 = temp;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	j;
	int	i;
	int	swap;

	if (ac == 1)
		return (0);
	swap = 1;
	while (swap)
	{
		j = 1;
		swap = 0;
		while (av[j + 1])
		{
			if (ft_check_swap(&av[j], &av[j + 1]))
				swap = 1;
			j++;
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
	return (0);
}
