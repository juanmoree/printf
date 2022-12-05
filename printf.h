/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:01:44 by jumoreno          #+#    #+#             */
/*   Updated: 2022/12/05 18:23:51 by jumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putchar(char const c, int count);
int	ft_putnbr(int nbr, int count);
int	ft_putstr(char const *s, int count);
int	ft_puthexa(unsigned int nbr, int count);
int	ft_putHexa(unsigned int nbr, int count);
int	ft_putptr(void *ptr, int count);

#endif
