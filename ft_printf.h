/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:22:59 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/24 21:32:42 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	put_char(int c, int fd);
int	specifier(char format, va_list ap);
int	put_str(char *s, int fd);
int	put_nbr(int n, int o);
int	put_small_hex(unsigned int n);
int	put_big_hex(unsigned int n);
int	put_nbr_unsigned(unsigned int n);

#endif
