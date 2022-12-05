/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:33:45 by jumoreno          #+#    #+#             */
/*   Updated: 2022/12/05 18:17:03 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_putchar(char const c, int count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	count += 1;
	return (count);
}

int	ft_putstr(char const *s, int count)
{
	unsigned int	i;
	
	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		count = ft_putchar(s[i++], count);
		if (count == -1)
			return (-1);
	}
	return (count);
}
/*
int	main()
{
	char const c = 'a';
	int	count = 0;
	ft_putchar(c, count);
}*/
