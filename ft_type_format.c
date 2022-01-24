/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:19:38 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/20 12:08:18 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_format(va_list args, char c, int *size)
{
	if (c == 's')
		*size += ft_putstr(va_arg(args, char *));
	if (c == 'c')
		*size += ft_putchar(va_arg(args, int));
	if (c == 'd' || c == 'i')
		*size += ft_putnbr_size(va_arg(args, int));
	if (c == 'p')
	{
		*size += ft_putstr("0x");
		*size += ft_putnbr_base(va_arg(args, unsigned long long),
				"0123456789abcdef");
	}
	if (c == 'u')
		*size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		*size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		*size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
}
