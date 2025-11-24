/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isiboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:21:03 by isiboub           #+#    #+#             */
/*   Updated: 2025/11/20 19:22:15 by isiboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_base(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}
