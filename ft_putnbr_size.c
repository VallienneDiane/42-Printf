/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:30:17 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/20 10:35:24 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

int	ft_putnbr_size(long n)
{
	int		size;
	long	nbr;

	nbr = n;
	size = 0;
	if (nbr == 0)
		size = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		size += write(1, "-", 1);
	}
	ft_putnbr(n);
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}
