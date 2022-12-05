/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:06:46 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/25 14:57:08 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

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
