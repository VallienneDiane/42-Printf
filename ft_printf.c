/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:38:27 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/25 15:39:43 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	args;

	va_start (args, format);
	i = -1;
	size = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				size++;
			}
			else
				ft_type_format(args, format[i + 1], &size);
			i++;
		}
		else
			size += ft_putchar(format[i]);
	}
	va_end (args);
	return (size);
}