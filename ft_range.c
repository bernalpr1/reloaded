/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <berpinhe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:29:34 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/22 11:13:53 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ret;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	ret = malloc(sizeof(int) * (size));
	if (!ret)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
