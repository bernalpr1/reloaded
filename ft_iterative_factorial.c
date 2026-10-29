/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <berpinhe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:00:18 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/21 08:54:10 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	nb++;
	result = 1;
	if (nb <= 0)
		return (0);
	while (--nb > 1)
		result *= nb;
	return (result);
}
