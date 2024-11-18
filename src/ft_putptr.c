/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:52:00 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/11/18 17:11:14 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr(va_list ap)
{
	unsigned long	ptr;
	size_t			count;

	ptr = (unsigned long)va_arg(ap, void *);
	count = 0;
	if (ptr == 0)
		return (count += ft_putstr("(nil)"));
	else
	{
		count += ft_putstr("0x");
		count += ft_putnbr_base(ptr, 16);
	}
	return (count);
}
