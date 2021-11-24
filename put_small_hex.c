/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_small_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:46:37 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/24 18:50:43 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_rec(unsigned int	n)
{
	unsigned int	x;
	int				len;

	x = 0;
	len = 0;
	if (n != 0)
	{
		x = n % 16;
		len++;
		len += hex_rec(n / 16);
		if (x < 10)
			ft_putchar_fd(x + 48, 1);
		else if (x < 16)
			ft_putchar_fd(x + 87, 1);
		return (len);
	}
	return (0);
}

int	put_small_hex(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar_fd(n + 48, 1);
		return (1);
	}
	else
		return (hex_rec(n));
}
