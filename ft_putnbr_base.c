/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:14:57 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/20 10:35:19 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int					size;
	unsigned long long	size_base;

	size = 1;
	size_base = ft_strlen(base);
	if (nbr >= size_base)
		size += ft_putnbr_base((nbr / size_base), base);
	ft_putchar(base[nbr % size_base]);
	return (size);
}
