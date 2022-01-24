/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:21:29 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/20 10:32:47 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_type_format(va_list args, char c, int *size);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(unsigned long long nbr, char *base);
int		ft_putnbr_size(long nbr);
size_t	ft_strlen(const char *str);

#endif