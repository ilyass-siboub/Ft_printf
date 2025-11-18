/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isiboub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:14:01 by isiboub           #+#    #+#             */
/*   Updated: 2025/11/01 16:14:09 by isiboub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x' || spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), spec));
	else if (spec == '%')
		return (ft_putchar('%'));
	return (0);
}
