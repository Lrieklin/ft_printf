/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:47:24 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/24 14:49:37 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	not_zero(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		not_zero(n = n / 10);
		len++;
	}
	return (len);
}

int	put_nbr(int n, int o)
{
	if (n == 0)
	{
		ft_putnbr_fd(n, o);
		return (1);
	}
	ft_putnbr_fd(n, o);
	return (not_zero(n));
}
