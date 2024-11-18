/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_types.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:10:55 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/11/18 14:18:24 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_type(const char type, va_list ap)
{
	int	count;

	if (!type)
		return (-1);
	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(ap, int));
	return (count);
}
