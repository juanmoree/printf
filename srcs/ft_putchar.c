/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:33:45 by jumoreno          #+#    #+#             */
/*   Updated: 2022/11/14 18:02:51 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_putchar(char const c, int count,)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	count += 1;
	return (count);
}
