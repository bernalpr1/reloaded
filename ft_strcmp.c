/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berpinhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:26:47 by berpinhe          #+#    #+#             */
/*   Updated: 2026/09/07 01:16:53 by berpinhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char *str1 = "olaa";
	char *str2 = "ola";

	if(ft_strcmp(str1, str2) > 0)
		write(1, "maior", 5);
	else if (ft_strcmp(str1, str2) < 0)
		write(1, "menor", 5);
	else
		write(1, "igual", 5);
	return (0); 
}
*/			
