/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:00:45 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/24 23:09:48 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier(char format, va_list ap)
{
	if (format == 'c')
		return (put_char(va_arg(ap, int), 1));
	if (format == 's')
		return (put_str(va_arg(ap, char *), 1));
	if (format == 'd' || format == 'i')
		return (put_nbr(va_arg(ap, int), 1));
	if (format == 'x')
		return (put_small_hex(va_arg(ap, unsigned int)));
	if (format == 'X')
		return (put_big_hex(va_arg(ap, unsigned int)));
	if (format == 'u')
		return (put_nbr_unsigned(va_arg(ap, unsigned int)));
	//if (format == 'p')
	//	return (put_char(, 1));
	if (format == '%')
		return (put_char('%', 1));
	return (0);
}
/*	if (format[i] == 'p')			*/

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += specifier(format[i], ap);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	//printf("%d\n", count);
	return (count);
}

/*int main()
{
	printf("%p\n", 15);
	ft_printf("%u\n", 1);
}*/