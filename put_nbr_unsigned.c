/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:31:17 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/24 22:19:52 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr_unsigned(unsigned int nb)
{
	unsigned char	sub_sym;
	int			    size, len;
	unsigned int	nums[10];

    len = 0;
    size = -1;
    if (nb == 0)
    {
        ft_putchar_fd(nb + 48, 1);
        return(1);
    }
	while (nb)
	{
		size++;
		nums[size] = nb % 10;
		nb = nb / 10;
        len++;
	}
	while (size >= 0)
	{
		sub_sym = nums[size];
		ft_putchar_fd(sub_sym + 48, 1);
		size--;
	}
    return (len);
}
