/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <berpinhe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 08:56:19 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/21 08:56:43 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_test(int i, int nb)
{
	if ((i * i) == nb)
		return (i);
	if (i > 46340 || i * i > nb)
		return (0);
	return (ft_test(i + 1, nb));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else
		return (ft_test(1, nb));
}
// #include<stdio.h>
// #include<stdlib.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	int nb = atoi(av[1]);
// 	printf("raiz quadrada (nao inteira 0) %d: %d\n", nb, ft_sqrt(nb));
// }
