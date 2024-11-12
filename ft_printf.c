/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:24:11 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/11/12 12:36:51 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	// estudar os ... , que são args variáveis
	int	total;

	total = 0;
	va_list	args;
	va_start(args, format);
	total += parse_format(format, args);
	va_end(args);
	return (total);
}
