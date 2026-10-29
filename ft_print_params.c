/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <berpinhe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 02:10:04 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/18 02:36:48 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int i = 0;
	
	printf("argc = %d\n" , ac);
	while (i <= ac - 1)
	{
		printf("this is argument index %d: \"%s\" argc count = %d\n", i, (av[i]), i + 1);
		i++;
	}
	return (0);
}
